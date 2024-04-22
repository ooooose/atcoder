#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    rep(i, n) {
        int a;
        int ans = l;
        cin >> a;
        ans = max(ans, a);
        ans = min(ans, r);
        cout << ans << ' ';
    }
    return 0;
}

