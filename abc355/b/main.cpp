#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool flag = false;
    rep(i, n - 1) {
        if (a[i + 1] - a[i] == 1) flag = true;
    }

    rep(i, m - 1) {
        if (b[i + 1] - b[i] == 1) flag = true;
    }
    if (flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

