#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    int ans = n;
    for(int bit = 0; bit < (1<<n); bit++ ) {
        vector<bool> tmp(m);
        int cnt = 0;
        for (int i = 0; i<n; i++ ) {
            if (bit >> i & 1) {
                ++cnt;
                for (int j = 0; j < m; j++) if (s[i][j] == 'o') tmp[j] = true;
            } 
        }
        bool all_exist = true;
        for (int j = 0; j < m; j++) {
            if (!tmp[j]) {all_exist = false; break;}
        }
        if (all_exist) ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}

