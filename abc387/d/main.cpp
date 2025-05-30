#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

// BFSでSからGまでの条件を満たす要素を当てはめていく
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
int H, W;
vector<string> G;
// 0は縦移動の次は横、1は横移動の次は縦
int dist[1000][1000][2];

int main() {
    cin >> H >> W;
    G.resize(H);
    pair<int, int> start, goal;

    rep(i, H) {
        cin >> G[i];
        rep(j, W) {
            if(G[i][j] == 'S') start = {i, j};
            if(G[i][j] == 'G') goal = {i, j};
        }
    }

    rep(i, H) rep(j, W) dist[i][j][0] = dist[i][j][1] = -1;
    queue<tuple<int, int, int>> Q;

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
                    dist[nx][ny][1] = d + 1;
                    Q.push({nx, ny, 1});
                }
            }
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

    if(dist[gx][gy][0] != -1 && dist[gx][gy][1] != -1) {
        ans = min(dist[gx][gy][0], dist[gx][gy][1]); 
    } else if (dist[gx][gy][0] != -1) {
        ans = dist[gx][gy][0];
    } else if (dist[gx][gy][1] != -1) {
        ans = dist[gx][gy][1];
    }
    cout << ans << endl;
    return 0;
}

