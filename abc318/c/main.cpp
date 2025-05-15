#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, d, k;
    ll p;
    cin >> n >> d >> p;
    vector<ll> f(n), s(n);
    rep(i, n) cin >> f[i];
    // 運賃を高い順にソート
    sort(f.begin(), f.end());
    s[0] = f[0];
    rep(i, n-1) s[i+1] = s[i] + f[i+1];

    k = (n+d-1)/d;
    ll ans = p*k;

    rep(i, k) ans = min(ans, s[n-1-(i*d)] +(p*i));
    cout << ans << endl;
    return 0;
}

