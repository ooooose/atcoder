#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

void solve(){
    int n;
    cin >> n;
    int n2 = n * 2;
    vector<int> a(n2);
    rep(i, n2) cin >> a[i];
    rep(i, n2) a[i]--;

    vector<vector<int>> is(n);
    rep(i, n2) is[a[i]].push_back(i);

    set<P> cand;
    rep(i, n2-1) {
        int x = a[i], y = a[i+1];
        if (x > y) swap(x, y);
        if (x == y) continue;
        cand.emplace(x, y);
    }

    int ans = 0;
    for (auto [x, y] : cand) {
        int xl = is[x][0], xr = is[x][1];
        int yl = is[y][0], yr = is[y][1];
        if(xl+1 == xr) continue;
        if(yl+1 == yr) continue;
        if(abs(xl-yl) == 1 && abs(xr-yr) == 1) ans++;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    rep(ti, t) {
        solve();
    }
    return 0;
}

