#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)


int main() {
    int n, q;
    cin >> n >> q;
    vector<int> p2b(n);
    vector<int> b2h(n);
    vector<int> h2b(n);
    rep(i, n) {
        p2b[i] = i;
        b2h[i] = i;
        h2b[i] = i;
    }

    rep(qi, q) {
        int type;
        cin >> type;
        if (type == 1) {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            p2b[a] = h2b[b];
        } else if (type == 2) {
            int a, b;
            cin >> a >> b;
            a--; b--;
            swap(h2b[a], h2b[b]);
            b2h[h2b[a]] = a;
            b2h[h2b[b]] = b;
        } else if (type == 3) {
            int a;
            cin >> a;
            a--;
            int ans = b2h[p2b[a]];
            cout << ans + 1 << '\n';
        }
    }

    
    return 0;
}

