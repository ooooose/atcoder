#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;

    if (s.length() % 2 == 1) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < s.length() / 2; i++) {
        int t = i + 1;
        if (s[2 * t - 1] != s[2 * t - 2]) {
            cout << "No" << endl;
            return 0;
        }
    }
    set<char> ans;
    rep(i, s.length()) {
        ans.insert(s[i]);
    }
    if (ans.size() != s.length() / 2) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}

