#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> b(n, 1);
    rep(i,n) a[i] = i + 1;
    int ans = 0;
    rep(i, q) {
        int x, p, h;
        int diff = 0;
        cin >> x;
        if(x == 1) {
            cin >> p >> h;
            b[a[p-1]-1]--;
            if (b[a[p-1]-1] == 1) diff--;
            a[p-1] = h;
            b[h-1]++;
            if (b[h-1] == 2) diff++;
            ans += diff;
        } else if (x == 2) {
            cout << ans << endl;
        }
    }
    return 0;
}

