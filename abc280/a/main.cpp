#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    int ans = 0;
    rep(i, h) {
        string s;
        cin >> s;
        rep(j, w) {
            if (s[j] == '#') ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

