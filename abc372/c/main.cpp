#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int ans = 0;
    rep (i, n-2) {
        string target = s.substr(i, 3);
        if (target == "ABC") ans++;
    }
    rep(i,q) {
        int p;
        char c;
        cin >> p >> c;
        p--;
        int idx = p - 2;
        rep (j, 3) {
            if (idx + j >= 0 && idx + j < n) {
                string target = s.substr(idx+j, 3);
                if (target == "ABC") ans--;
            }
        }
        s[p] = c;
        rep (j, 3) {
            if (idx + j >= 0 && idx + j < n) {
                string target = s.substr(idx+j, 3);
                if (target == "ABC") ans++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}

