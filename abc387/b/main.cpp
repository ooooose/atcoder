#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n = 1;
    int m = 1;
    vector<int> a(9*9);
    rep (i, 9) {
        rep (j, 9) {
            a.push_back((i + 1) * (j + 1));
        }
    }
    int x;
    cin >> x;
    int ans = 0;
    rep(i, a.size()) {
        if (a[i] != x) {
            ans += a[i];
        }
    }
    cout << ans << endl;
    return 0;
}

