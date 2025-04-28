#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> x(m);
    rep(i,m) cin >> x[i];
    vector<int> x_diff(m,0);
    rep(i,m-1) x_diff[i] = x[i+1] - x[i];
    x_diff.back() = n - x.back() + 1;
    int ans = 0;
    rep(i,m) {
        int a;
        cin >> a;
        if (a!=x_diff[i]) {
            cout << -1 << endl;
            return 0;
        }
        rep(j, x_diff[i]-1) ans+=j+1;
    }
    cout << ans << endl;
    
    return 0;
}

