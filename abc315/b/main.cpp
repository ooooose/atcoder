#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int m;
    cin >> m;
    vector<int> d(m);
    int all = 0;
    rep(i, m) {
        int a;
        cin >> a;
        all += a;
        d[i] = a;
    }
    int half = all / 2;
    int ans = 0;
    rep(i, m) {
        if (half < d[i]) {
            ans = i + 1;
            break;
        }
        half -= d[i];
    }
    cout << ans  << " " << half + 1 << endl;

    return 0;
}

