#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> v;
    int ans = 0;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        if (a == b) {
            ans++;
            continue;
        }
        if (a > b) swap(a, b);
        if (v.count({a, b})) {
            ans++;
            continue;
        }
        v.insert({a, b});
    }
    cout << ans << endl;
    return 0;
}

