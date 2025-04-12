#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    int flag = 0;
    rep (i, n) {
        if (s[i] == 'O') flag++;
        else flag = 0;
        if (flag == k) {
            ans++;
            flag = 0;
        }
    }
    cout << ans << endl;
    return 0;
}

