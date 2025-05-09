#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<P> stones(m);
    rep(i,m) cin >> stones[i].first;
    rep(i,m) cin >> stones[i].second;
    sort(stones.begin(), stones.end());
    stones.emplace_back(n+1, 1);

    ll ans = 0;
    int px = 0;
    ll num = 1;
    for(auto [x, y] : stones) {
        ll L = x-px;
        ll carry = num-L;
        ans += (L-1)*L/2;
        ans += L*carry;
        if (carry < 0) {
            cout << -1 << endl;
            return 0;
        }
        px = x;
        num = carry + y;
    }
    if (num != 1) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}

