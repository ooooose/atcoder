#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;
    for (ll i = 1; i * i * i <=n; i++) {
        string s = to_string(i * i * i);
        string t = s;
        reverse(t.begin(), t.end());

        if (s == t) ans = i * i * i;
    }
    cout << ans << endl;
}

