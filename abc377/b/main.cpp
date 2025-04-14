#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<vector<int>> a(8, vector<int>(8, 0));
    rep (i, 8) {
        string s;
        cin >> s;
        rep(j, 8) {
            if (s[j] == '#') {
                rep (k, 8) {
                    a[i][k] = 1;
                    rep (l, 8) {
                        a[l][j] = 1;
                    }
                }
            }
        }
    }
    int ans = 0;
    rep (i, 8) {
        rep (j, 8) {
            if (a[i][j] == 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

