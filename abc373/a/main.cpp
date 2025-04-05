#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int ans = 0;
    rep (i, 12) {
        string s;
        cin >> s;
        if (i + 1 == s.size()) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

