#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int ans = 0;
    rep (i, s.size()) {
        if (s[i] == '|' && i != 0) {
            cout << ans;
            ans = 0;
            if (i != s.size() - 1) {
                cout << ' ';
            }
        }
        else if (s[i] == '-') {
            ans++;
        };
    }
    cout << endl;
    return 0;
}

