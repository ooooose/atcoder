#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int n, k;
string s;

void generate(int idx, string current, int o_count, set<string>& X) {
    if (idx == n) {
        if (o_count == k) X.insert(current);
        return;
    }

    if (s[idx] == '?') {
        generate(idx + 1, current + '.', o_count, X);
        if (o_count < k && (idx == 0 || current.back() != 'o')) {
            generate(idx + 1, current + 'o', o_count + 1, X);
        }
    } else {
        if (s[idx] == 'o') {
            if (o_count < k && (idx == 0 || current.back() != 'o')) {
                generate(idx + 1, current + 'o', o_count + 1, X);
            }
        } else {
            generate(idx + 1, current + '.', o_count, X);
        }
    }
}

int main() {
    cin >> n >> k;
    cin >> s;

    set<string> X;
    generate(0, "", 0, X);

    string t(n, '?');
    rep(i, n) {
        bool all_dot = true, all_o = true;
        for (const string& str : X) {
            if (str[i] == '.') all_o = false;
            if (str[i] == 'o') all_dot = false;
        }
        if (all_dot) t[i] = '.';
        else if (all_o) t[i] = 'o';
        else t[i] = '?';
    }

    cout << t << endl;
    return 0;
}