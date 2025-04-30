#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll t = 0;
    rep(i, n) {
        int h;
        cin >> h;
        int x = h / 5;
        h -= 5 * (h / 5);
        int mod = h % 5;
        t += x * 3;
        if (mod <= 2) t += mod;
        else if (mod == 3) t += 3;
        else if (mod == 4) t += 3;
    }
    cout << t << endl;
    return 0;
}

