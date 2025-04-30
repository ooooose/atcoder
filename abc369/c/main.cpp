#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    vector<int> diffs(n-1);
    rep(i,n-1) diffs[i] = a[i+1] - a[i];
    ll ans = 2*n-1;
    int cnt = 0;
    rep(i,n-2) {
        if (diffs[i] == diffs[i+1]) cnt++;
        else {
            if (cnt >= 1) ans += cnt * ll(cnt + 1) / 2;
            cnt = 0;
        }
    }
    ans += cnt * ll(cnt + 1) / 2;
    cout << ans << endl;
    return 0;
}

