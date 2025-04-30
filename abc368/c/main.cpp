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
        int x = int(h / 5);
        t += x * 3;
        h -= 5 * x;
        while(h > 0) {
            t++;
            if (t % 3 == 0) h -= 3;
            else h -= 1;
        }
    }
    cout << t << endl;
    return 0;
}

