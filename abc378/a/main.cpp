#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<int> a(4);
    set<int> s;
    rep (i, 4) {
        cin >> a[i];
    }
    rep (i, 4) {
        s.insert(a[i]);
    }
    vector<int> b(s.begin(), s.end());
    int ans = 0;
    rep (i, b.size()) {
        int count = 0;
        rep (j, 4) {
            if (b[i] == a[j]) {
                count++;
            }
        }
        if (count == 2 || count == 3) ans++;
        else if (count == 4) ans += 2;
    }
    cout << ans << endl;

    return 0;
}

