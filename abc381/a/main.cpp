#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    rep (i, n) {
        int t = i + 1;
        if (n % 2 == 0) {
            cout << "No" << endl;
            return 0;
        };
        if (t <= (n + 1) / 2 - 1) {
            if (s[i] != '1') {
                cout << "No" << endl;
                return 0;
            }
        }
        if (t == (n + 1) / 2) {
            if (s[i] != '/') {
                cout << "No" << endl;
                return 0;
            }
        }
        if ((n * n + 1) / 2 + 1 <= t) {
            if (s[i] != '2') {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}

