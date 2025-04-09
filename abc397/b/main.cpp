#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int count = 0;
    rep (i, s.size()) {
        if (i % 2 == 0) {
            if (s[i] != 'i' && i != s.size() - 1) {
                count++;
            }
        } else {
            if (s[i] != 'o' && i != s.size() - 1) {
                count++;
            }
        }
    }
    if (s.size() % 2 != 0) {
        if (s[s.size() - 1] == 'i') {
            count++;
        }
        if (s[s.size() - 1] == 'o') {
            count += 2;
        }
    }
    cout << count << endl;
}

