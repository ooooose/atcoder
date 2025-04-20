#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 0;
    rep(i,n-1) {
        set<int> s;
        set<int> t;
        rep(j, n) {
            if (j <= i) {
                s.insert(a[j]);
            } else {
                t.insert(a[j]);
            }
            int x = s.size() + t.size();
            ans = max(ans, x);
        }
    }
    cout << ans << endl;
    return 0;
}

