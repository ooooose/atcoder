#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int start = s.size() - 2;
    if (s[start - 1] == 's' && s[start] == 'a' && s[start + 1] == 'n') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

