#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int count = 0;
    rep (i, s.size()) {
        if (i % 2 == 0) {
            if (s[i] != 'i') {
                count++;
            }
        } else {
            if (s[i] != 'o') {
                count++;
            }
        }
    }
    if (s.size() % 2 != 0) count++;
    cout << count << endl; 
    return 0;
}

