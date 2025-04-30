#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll ans = 0;
    rep(i, n) {
        ll h;
        cin >> h;
        ll piv = h / 5;
        int mod = h % 5;
        if(piv>0) ans += piv * 3;
        if (mod == 0) ans += 0;
        else if (mod == 1) ans += 1;
        else if (mod == 2) ans += 2;
        else if (mod == 3) ans += 3;
        else if (mod == 4) ans += 3;
    }
    cout << ans << endl;
    return 0;
}

