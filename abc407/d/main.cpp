#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;


int main() {
    int h, w;
    cin >> h >> w;
    vector a(h, vector<ll>(w));
    rep(i,h) rep(j, w) cin >> a[i][j];

    ll ans = 0;
    auto f = [&](auto f, vector<vector<bool>> covered, int i, int j) -> void {
        if (j == w) j = 0, i++;
        if (i == h) {
            ll now = 0;
            rep(ni, h) rep(nj, w) if (!covered[ni][nj]) now ^= a[ni][nj];
            ans = max(ans, now);
            return;
        }
        if (covered[i][j]) f(f, covered, i, j + 1);
        else {
            f(f, covered, i, j + 1);
            if (j+1 < w && !covered[i][j+1]) {
                covered[i][j] = covered[i][j+1] = true;
                f(f, covered, i, j + 1);
                covered[i][j] = covered[i][j+1] = false;
            }
            if (i+1 < h && !covered[i+1][j]) {
                covered[i][j] = covered[i+1][j] = true;
                f(f, covered, i, j + 1);
                covered[i][j] = covered[i+1][j] = false;
            }
        }
    };
    f(f, vector(h, vector<bool>(w)), 0, 0);
    cout << ans << endl;
    return 0;
}
