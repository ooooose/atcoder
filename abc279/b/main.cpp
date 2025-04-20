#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    if (t.size() > s.size()) {
        cout << "No" << endl;
        return 0;
    }
    rep(i, s.size() - t.size() + 1) {
        if (s.substr(i, t.size()) == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

