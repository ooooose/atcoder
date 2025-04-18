#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    int size = min(s.size(), t.size());
    int ans = 0;
    rep(i, s.size()) {
        if (s[i] == t[i]) {
            ans++;
        } else break;
    }
    if (s == t) {
        cout << 0 << endl;
    } else {
        cout << ans + 1 << endl;
    }
    return 0;
}

