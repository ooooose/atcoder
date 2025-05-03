#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int n;
    cin >> n;
    map<char, int> m;
    string s;
    cin >> s;
    int tmp = 1;
    rep(i, n) {
        if (s[i] == s[i + 1]) {
            tmp++;
        } else {
            tmp = 1;
        };
        m[s[i]] = max(m[s[i]], tmp);
    }
    int ans = 0;
    rep (i, m.size()) {
        ans += m[i];
    }
    cout << ans << endl;
    return 0;
}

