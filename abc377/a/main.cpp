#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    int c = 0;
    rep (i, s.size()) {
        if (s[i] == 'A') {
            a++;
        } else if (s[i] == 'B') {
            b++;
        } else if (s[i] == 'C') {
            c++;
        }
    }
    if (a == 1 && b == 1 && c == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

