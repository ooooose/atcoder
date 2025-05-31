#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; string s;
    cin >> n >> s;

    vector<int> r1(n+1);
    for(int i = n-1; i >=0; i--) {
        r1[i] = r1[i+1];
        if (s[i] == '1') r1[i]++;
    }
    int ans = 1e9;
    int l0 = 0;
    int best = 0,l01 = 0;
    for (int r = 1; r <= n; r++) {
        if(s[r-1] == '0') l0++;
        if(s[r-1] == '0') l01--; else l01++;
        best = min(best, l01);
        int now = r1[r] + l0 + best;
        ans = min(ans, now);
    }
    cout << ans << endl;
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
