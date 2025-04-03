#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int p = 0;
    int ans = 0;
    while (p != s.length()) {
        p++;
        if (s[p] == '0' && s[p + 1] == '0') {
            p++;
        }
       ans++;
    }
    cout << ans << endl;
    return 0;
}

