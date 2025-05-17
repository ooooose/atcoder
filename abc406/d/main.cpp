#include <bits/stdc++.h>
using namespace std;

using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W, N;
    cin >> H >> W >> N;

    vector<int> row(H + 1), col(W + 1);
    unordered_map<int, vector<int>> row_garbage, col_garbage;
    set<P> garbage_set;

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        row[x]++;
        col[y]++;
        row_garbage[x].push_back(y);
        col_garbage[y].push_back(x);
        garbage_set.insert({x, y});
    }

    int Q;
    cin >> Q;
    while (Q--) {
        int t, x;
        cin >> t >> x;

        if (t == 1) {
            cout << row[x] << '\n';
            for (int y : row_garbage[x]) {
                if (garbage_set.count({x, y})) {
                    garbage_set.erase({x, y});
                    col[y]--;
                }
            }
            row[x] = 0;
            row_garbage[x].clear();
        } else {
            cout << col[x] << '\n';
            for (int y : col_garbage[x]) {
                if (garbage_set.count({y, x})) {
                    garbage_set.erase({y, x});
                    row[y]--;
                }
            }
            col[x] = 0;
            col_garbage[x].clear();
        }
    }

    return 0;
}
