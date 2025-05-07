#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll D;
    cin >> D;

    vector<ll> squares;
    for (ll i = 0; i * i <= 2 * D; i++) {
        squares.push_back(i * i);
    }

    ll ans = LLONG_MAX;

    for (ll x2 : squares) {
        ll target = D - x2;
        auto it = lower_bound(squares.begin(), squares.end(), target);
        if (it != squares.end()) {
            ll y2 = *it;
            ans = min(ans, abs(x2 + y2 - D));
        }

        if (it != squares.begin()) {
            ll y2 = *(it - 1);
            ans = min(ans, abs(x2 + y2 - D));
        }
    }

    cout << ans << endl;
    return 0;
}

