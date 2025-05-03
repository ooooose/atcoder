#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    int max_len = 0;
    rep(i, n) {
        cin >> s[i];
        max_len = max(max_len, (int)s[i].size());
    }
    rep(i, max_len) {
        string t = "";
        for (int j = n-1; j >= 0; --j) {
            if (i < s[j].size()) {
                t += s[j][i];
            }
            else t+= "*";
        }
        for(int j = t.size()-1; j >= 0; --j) {
            if (t[j] != '*') break;
            t = t.substr(0, j);
        }
        cout << t << endl;
    }
    return 0;
}
