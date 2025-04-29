#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<long long> k(n);
    rep(i,n) cin >> k[i];
    vector<long long> sums;
    int ans = 1e9;
    rep(s, 1<<n) {
        int a = 0, b = 0;
        rep(i, n) {
            if (s>>i&1) b += k[i];
            else a += k[i];
        }
        int now = max(a, b);
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
}

