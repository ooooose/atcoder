#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

pair<int, int> operate(char t, int x, int y) {
    if (t == 'U') x--;
    if (t == 'D') x++;
    if (t == 'L') y--;
    if (t == 'R') y++;
    return {x, y};
}


int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<vector<char>> grid(h, vector<char>(w));
    rep (i, h) {
        rep(j, w) {
            char t;
            cin >> t;
            grid[i][j] = t;
        }
    }
    string t;
    cin >> t;
    set<pair<int, int>> visited;
    rep (i, t.size()) {
        char c = t[i];
        int new_x, new_y;
        tie(new_x, new_y) = operate(c, x, y);
        if (grid[new_x - 1][new_y - 1] == '#') {
            new_x = x;
            new_y = y;
        } else if (grid[new_x - 1][new_y - 1] == '.') {
            x = new_x;
            y = new_y;
        } else if (grid[new_x - 1][new_y - 1] == '@') {
            x = new_x;
            y = new_y;
            visited.insert({x, y});
        }
    }
    cout << x << " " << y << " " << visited.size() << endl;
    return 0;
}

