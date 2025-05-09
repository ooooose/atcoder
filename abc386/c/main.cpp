#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int k;
    cin >> k;
    string s, t;
    cin >> s;
    cin >> t;
    if (s.size() == t.size()) {
        int cnt = 0;
        rep(i, s.size()) {
            if (s[i] != t[i]) cnt++;
            if (cnt > 1) break;
        }
        if (cnt <= 1) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    } else if (s.size()-1 == t.size()) {
        int cnt = 0;
        rep(i, s.size()) {
            if (s[i] != t[i]) {
                s.erase(i, 1);
                cnt++;
            }
            if (cnt > 1) break;
        }
        if (cnt == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else if (s.size() == t.size()-1) {
        int cnt = 0;
        rep(i, t.size()) {
            if (s[i] != t[i]) {
                t.erase(i, 1);
                cnt++;
            }
            if (cnt > 1) break;
        }
        if (cnt == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    } else {
        cout << "No" << endl;
        return 0;
    }
}

