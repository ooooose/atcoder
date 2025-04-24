#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 0;
    for(int w = 1; w <= n; w++) {
        vector<int> b(n);
        rep(si, w) {
            vector<int> c;
            for (int i = si; i < n; i += w) {
                c.push_back(a[i]);
            }
            int val = -1, len = 0;
            for (int x : c) {
                if (val == x) len++;
                else {
                    val = x;
                    len = 1;
                }
                ans = max(ans, len);
            }
        }
    }
    cout << ans << endl;
    return 0;
}

