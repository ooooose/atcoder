#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    char c1, c2;
    cin >> n >> c1 >> c2;
    string s;
    cin >> s;
    string ans = "";
    rep(i, n) {
        if (s.at(i) != c1) {
            ans += c2;
        } else {
            ans += c1;
        }
    }
    cout << ans << endl;
    return 0;
}

