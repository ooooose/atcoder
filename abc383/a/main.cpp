#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    int w = 0;
    vector<vector<int>> a(n);
    rep(i, n) {
        int t, l;
        cin >> t >> l;
        a[i] = {t, l};
    }
    rep (i, n) {
        int ans = 0;
        if (i != 0) {
            w -= a[i][0] - a[i - 1][0];
            if (w < 0) {
                w = 0;
            }
        }
        w += a[i][1];
    }
    cout << w << endl;
    return 0;
}

