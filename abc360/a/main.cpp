#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int pos_r = 0, pos_m = 0;

    for (int i = 0; i < 3; ++i) {
        if (s[i] == 'R') pos_r = i;
        if (s[i] == 'M') pos_m = i;
    }
    if (pos_r < pos_m) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}

