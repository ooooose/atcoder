#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
    }
    int ans = 0;
    int count = 0;
    rep(i, d) {
        bool flag = true;
        rep (j, n) {
            if (s[j][i] != 'o') {
                flag = false;
            }
        }
        if (flag) count++;
        else count = 0;
        ans = max(ans, count);
    }
    cout << ans << endl;
    return 0;
}

