#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    vector<vector<bool>> visited(h, vector<bool>(w, false));
    const int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    const int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

    int ans = 0;

    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '#' && !visited[i][j]) {
                ans++;
                queue<P> q;
                q.emplace(i, j);
                visited[i][j] = true;

                while (!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();
                    rep(d, 8) {
                        int nx = x + dx[d];
                        int ny = y + dy[d];
                        if (nx >= 0 && nx < h && ny >= 0 && ny < w && s[nx][ny] == '#' && !visited[nx][ny]) {
                            visited[nx][ny] = true;
                            q.emplace(nx, ny);
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}

