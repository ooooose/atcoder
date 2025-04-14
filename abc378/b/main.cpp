#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    rep(i, n) {
        cin >> a[i][0] >> a[i][1];
    }
    int q;
    cin >> q;
    rep(i, q) {
        int t, d;
        cin >> t >> d;
        int ans = (d / a[t-1][0]) * a[t-1][0] + a[t-1][1];
        if (ans < d) ans+= a[t-1][0];
        cout << ans << endl;
    }
    return 0;
}

