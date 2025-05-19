#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    map<int, set<int>> rows, cols;
    rep(i,n) {
        int a, b;
        cin >> a >> b;
        rows[a].insert(b);
        cols[b].insert(a);
    }

    int q;
    cin >> q;
    while(q--) {
        int type, query;
        cin >> type >> query;
        if (type == 1) {
            if (rows.count(query)) {
                int cnt = rows[query].size();
                cout << cnt << endl;

                for (int r : rows[query]) {
                    cols[r].erase(query);   
                    if (cols[r].empty()) {
                        cols.erase(r);
                    } 
                }
                rows.erase(query);
            } else cout << 0 << endl;
        } else if (type == 2) {
            if (cols.count(query)) {
                int cnt = cols[query].size();
                cout << cnt << endl;

                for (int c : cols[query]) {
                    rows[c].erase(query);
                    if (rows[c].empty()) {
                        rows.erase(c);
                    }
                }
                cols.erase(query);
            } else cout << 0 << endl;
        }
    }

    return 0;
}
