#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans = 0;
    rep(i, n) {
        if (s.at(i) == 'a' || s.at(i) == 'b') {
            ans++;
        }
        else {
            ans = 0;
        }

        if (ans >= 2) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

