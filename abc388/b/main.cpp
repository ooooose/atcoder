#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, d;
    cin >> n >> d;
    vector<vector<int>> a(n);
    rep(i, n) {
        int t, l;
        cin >> t >> l;
        a[i] = {t, l};
    }
    rep(i , d) {
        int ans = 0;
        rep(j, n) {
            int snake = a[j][0] * (a[j][1] + i + 1);
            if (ans < snake) {
                ans = snake;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

