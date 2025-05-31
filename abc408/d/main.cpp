#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> c(n+1);

    for(int i = 0; i < n; i++) c[i+1] = c[i] + (s[i] == '0' ? 1 : -1);
    int sum = count(s.begin(), s.end(), '1');

    int ma = 0;
    int res = 0;

    for(int i=0; i <= n; i++) {
        res = min(res, c[i] - ma);
        ma = max(ma, c[i]);
    } 
    cout << sum + res << endl;
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
