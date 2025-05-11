#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> cnt(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        cnt[(a+b)%n]++;
    }
    ll ans = (ll)m * (m-1) / 2;
    for(auto e : cnt) {
        ans -= e * (e-1) / 2;
    }
    cout << ans << endl;
    return 0;
}