#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n , d;
    cin >> n >> d;
    string s;
    cin >> s;
    rep(i, d) {
        for (int j = n; j >= 0; j--) {
            if (s[j] == '@') {
                s[j] = '.';
                break;
            }
        }
    }
    int ans = 0;
    rep (i, n) {
        if (s[i] == '.') {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

