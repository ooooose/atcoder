#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    // 出る目の確率をMapで管理する
    vector<pair<int, map<int, double>>> ka(n);
    rep(i, n) {
        int k;
        cin >> k;
        ka[i].first = i;
        vector<int> a(k);
        rep(j, k) {
            cin >> a[j];
            double x = 1 / (double)k;
            ka[i].second[a[j]] += x;
        }
    }
    // 2つのサイコロの出目が等しくなる確率の最大値を求める。
    double ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double tmp = 0;
            for (auto [x, y] : ka[i].second) {
                if (ka[j].second.count(x)) {
                    tmp = min(ka[i].second[x], ka[j].second[x]);
                }
            }
            ans = max(ans, tmp);
        }
    }
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}

