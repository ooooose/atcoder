#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int ans = 0;
    rep(i, n){
        if (i == 0) continue;
        int diff = p[i] - p[0] + 1;
        ans = max(ans, diff);
    }
    cout << ans << endl;
    return 0;
}

