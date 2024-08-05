#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n), w(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> w[i];

    vector<vector<int>> box(n);
    rep(i, n) box[a[i]-1].push_back(w[i]);

    int ans = 0;
    rep(i, n) {
        if (box[i].size() == 0) continue;
        sort(box[i].begin(), box[i].end());
        rep(j, box[i].size()-1) ans += box[i][j];
    }

    cout << ans << endl;
    
    return 0;
}

