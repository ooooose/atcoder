#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int n;
    cin >> n;
    cout << s[0] << ".";
    rep (i, n) {
        cout << s[i + 2];
    }
    cout << endl;
    return 0;
}

