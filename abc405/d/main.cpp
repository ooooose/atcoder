#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using P = pair<int, int>;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const char arrow[] = {'^', 'v', '<', '>'};

int h, w;
vector<string> grid;
vector<vector<P>> previous;
vector<vector<int>> dist;

void bfs() {
    queue<P> q;
    dist.assign(h, vector<int>(w, -1));
    previous.assign(h, vector<P>(w, {-1, -1}));

    rep(i, h) {
        rep(j, w) {
            if (grid[i][j] == 'E') {
                q.push({i, j});
                dist[i][j] = 0;
            }
        }
    }

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        rep(d, 4) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (grid[nx][ny] == '#' || dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[x][y] + 1;
            previous[nx][ny] = {x, y};
            q.push({nx, ny});
        }
    }
}

int main() {
    cin >> h >> w;
    grid.resize(h);

    rep(i, h) cin >> grid[i];

    bfs();

    vector<string> result = grid;

    rep(i, h) {
        rep(j, w) {
            if (grid[i][j] == '.') {
                auto [nx, ny] = previous[i][j];
                for(int d = 0; d < 4; d++) {
                    if (nx == i + dx[d] && ny == j + dy[d]) {
                        result[i][j] = arrow[d];
                        break;
                    }
                }
            }
        }
    }

    for (const auto& row : result) {
        cout << row << '\n';
    }
    return 0;
}

