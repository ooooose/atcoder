#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() { string s, t;
    cin >> s >> t;
    vector<int> a(s.size());
    int j = 0;

    rep(i, t.size()) {
        if (s[j] == t[i]) {
            a[j] = i + 1;
            j++;
        }
    }

    rep(i, s.size()) cout << a[i] << " \n"[i == s.size() - 1];
}

