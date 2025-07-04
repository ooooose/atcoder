#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

// 横方向から始まるパターンと、縦方向から始まるパターンに分けてBFSで探索する
// queueには座標とともに移動パターンも保持しておくとよい
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
int H, W;
vector<string> G;
// 0は縦移動の次は横、1は横移動の次は縦としてそれぞれ到達までの距離を保持
int dist[1000][1000][2];

int main() {
    cin >> H >> W;
    G.resize(H);
    // startとgoalを保持しておき、最初のループで取得しておく
    pair<int, int> start, goal;

    rep(i, H) {
        cin >> G[i];
        rep(j, W) {
            if(G[i][j] == 'S') start = {i, j};
            if(G[i][j] == 'G') goal = {i, j};
        }
    }

    // 全ての座標には初期値-1を設定
    rep(i, H) rep(j, W) dist[i][j][0] = dist[i][j][1] = -1;
    queue<tuple<int, int, int>> Q;

    // スタート地点には最短距離としての初期値0をセット
    dist[start.first][start.second][0] = 0;
    dist[start.first][start.second][1] = 0;

    // 次は縦方向への移動
    Q.push({start.first, start.second, 0});
    // 次は横方向への移動
    Q.push({start.first, start.second, 1});

    while(!Q.empty()) {
        auto [x, y, dir] = Q.front();
        Q.pop();
        int d = dist[x][y][dir];
        if (dir == 0) {
            for(int i = 0; i < 2; ++i) {
                int nx = x + dx[i];
                int ny = y;

                if (nx >= 0 && nx < H && G[nx][ny] != '#' && dist[nx][ny][1] == -1) {
                    // 距離を更新、queueには座標と1（次はY方向への移動）を設定
                    dist[nx][ny][1] = d + 1;
                    Q.push({nx, ny, 1});
                }
            }
        // 上記の逆のことをする
        } else {
            for(int i = 2; i < 4; ++i) {
                int nx = x;
                int ny = y + dy[i];

                if (ny >= 0 && ny < W && G[nx][ny] != '#' && dist[nx][ny][0] == -1) {
                    dist[nx][ny][0] = d + 1;
                    Q.push({nx, ny, 0});
                }
            }
        }
    }
    int gx = goal.first, gy = goal.second;
    int ans = -1;

    // ２パターンどちらも到達可能であれば、値が小さい方を取得
    if(dist[gx][gy][0] != -1 && dist[gx][gy][1] != -1) {
        ans = min(dist[gx][gy][0], dist[gx][gy][1]); 
    // 以降どちらかが-1（到達不能）だった場合にはもう一方を出力する
    } else if (dist[gx][gy][0] != -1) {
        ans = dist[gx][gy][0];
    } else if (dist[gx][gy][1] != -1) {
        ans = dist[gx][gy][1];
    }

    cout << ans << endl;
    return 0;
}

