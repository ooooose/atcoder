#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> a(m);
    vector<char> r(m);
    rep(i, m) {
        int c;
        cin >> c;
        a[i].resize(c);
        rep(j, c) cin >> a[i][j];
        cin >> r[i];
    }

    int ans = 0;

    for (int bit = 0; bit < (1 << n); bit++) {
        bool valid = true;

        rep(i, m) {
            int count = 0;
            for (int key : a[i]) {
                if (bit & (1 << (key - 1))) {
                    count++;
                }
            }

            if (r[i] == 'o' && count < k) {
                valid = false;
                break;
            }
            if (r[i] == 'x' && count >= k) {
                valid = false;
                break;
            }
        }

        if (valid) ans++;
    }

    cout << ans << endl;
    return 0;
}

