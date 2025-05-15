#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll n, l, k;
    cin >> n >> l >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    auto check = [&](ll x) -> bool {
        ll num = 0;
        ll pre = 0;
        rep(i, n) {
            if (a[i] - pre >= x) {
                num++;
                pre = a[i];
            }
        }

        if (l - pre >= x) num++;

        return num >= k + 1;
    };

    ll left = -1, right = l + 1;
    while (right - left > 1) {
        ll mid = (left + right) / 2;
        if (check(mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }

    cout << left << endl;
    return 0;
}

