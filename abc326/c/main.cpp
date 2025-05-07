#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    a.push_back(LLONG_MAX);
    int ans = 0;
    int r = 0;
    rep(i, n+1) {
        while (a[r] < a[i]+m) r++;
        ans = max(ans, r-i);
    }
    cout << ans << endl;
    return 0;
}

