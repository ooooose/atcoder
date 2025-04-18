#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];

    vector<int> s(n + 1);
    rep(i, n) {
        s[q[i]] = q[p[i] - 1];
    }

    cout << s[1];
    for (int i = 2; i <= n; i++) {
        cout << " " << s[i];
    }
    cout << endl;

    return 0;
}

