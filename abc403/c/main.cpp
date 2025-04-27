#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<bool> all_permissions(n + 1, false);
    vector<unordered_set<int>> specific_permissions(n + 1);

    rep(i, q) {
        int query;
        cin >> query;

        if (query == 1) {
            int x, y;
            cin >> x >> y;
            specific_permissions[x].insert(y);
        } else if (query == 2) {
            int x;
            cin >> x;
            all_permissions[x] = true;
            specific_permissions[x].clear();
        } else if (query == 3) {
            int x, y;
            cin >> x >> y;
            if (all_permissions[x] || specific_permissions[x].count(y)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}

