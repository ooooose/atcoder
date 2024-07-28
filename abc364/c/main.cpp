#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

using ll = long long;

int solve(vector<int> a, ll x) {
    sort(a.rbegin(), a.rend());
    rep(i, a.size()) {
        x -= a[i];
        if (x < 0) return i + 1;
    }
    return a.size();
}

int main() {
    int n; ll x, y;
    cin >> n >> x >> y;

    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    int ans = min(solve(a, x), solve(b, y));
    cout << ans << endl;
    return 0;
}

