#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> t(n);
    rep(i, n) cin >> s[i];
    rep(i, n) cin >> t[i];
    int ans = 0;
    rep(i, n) {
        if (s[i] != t[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}

