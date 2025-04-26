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
    rep(i,n-1) a[i+1] = min(a[i+1], a[i]);
    rep(j, m) {
        int i = lower_bound(a.begin(), a.end(), b[j], greater<int>()) - a.begin();
        if (i ==n) cout << -1 << endl;
        else cout << i+1 << endl;
    }
    return 0;
}

