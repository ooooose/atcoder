#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    for(int a = 1; a < 60; a++) {
        ll x = n;
        rep(i, a) x/= 2;
        ll m = sqrt(x);
        ans += (m+1) / 2;
    }
    cout << ans << endl;
    return 0;
}
