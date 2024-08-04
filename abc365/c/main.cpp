#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

using ll = long long;

int main() {
    int n; ll m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    auto f = [&](int x) -> bool {
        ll s = 0;
        rep(i, n) s += min(x, a[i]);
        return s <= m;
    };

    const int INF = 1001001001;

    if (f(INF)) cout << "infinite" << endl;
    else {
        int ac = 0, wa = INF;
        while (ac + 1 < wa) {
            int wj = (ac + wa) / 2;
            if (f(wj)) ac = wj; else wa = wj;
        }
        cout << ac << endl;
    }

    return 0;
}

