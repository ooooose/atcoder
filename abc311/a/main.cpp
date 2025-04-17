#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<bool> flags(3, false);
    rep(i, n) {
        if (s[i] == 'A') {
            flags[0] = true;
        } else if (s[i] == 'B') {
            flags[1] = true;
        } else if (s[i] == 'C') {
            flags[2] = true;
        }
        if (flags[0] && flags[1] && flags[2]) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}

