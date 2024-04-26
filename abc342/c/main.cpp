#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    string s;
    cin >> n >> s >> q;
    string t;
    for (int i = 0; i < 26; ++i) t += 'a' + i;

    for (int qi = 0; qi < q; ++qi ) {
        char c, d;
        cin >> c >> d;
        for (int i = 0; i < 26; ++i) {
            if (t[i] == c) t[i] = d;
        }
    }


    for (int i = 0; i < n; ++i) {
        int j = s[i] - 'a';
        s[i] = t[j];
    }

    cout << s << endl;
    return 0;
}

