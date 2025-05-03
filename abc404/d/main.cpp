#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<ll> c(n);
    rep(i, n) cin >> c[i];
    
    vector<vector<int>> zooList(n);
    rep(i,m) {
        int k;
        cin >> k;
        rep(j, k) {
            int a;
            cin >> a;
            a--;
            zooList[a].push_back(i);
        }
    }
    const ll INF = 1LL << 60;
    ll ans = INF;

    int limit = pow(3, n);
    rep(i, limit) {
        vector<int> visit(n);
        int tmp = i;
        for(int j=0; j < n; j++) {
            visit[j] = tmp % 3;
            tmp /= 3;
        }
        vector<int> cnt(m);
        ll cost = 0;

        rep(j,n) {
            if (visit[j] == 0) continue;
            cost += visit[j] * c[j];
            for (int k : zooList[j]) {
                cnt[k] += visit[j];
            }
        }
        bool ok = true;
        rep(j,m) {
            if (cnt[j] < 2) {
                ok = false;
                break;
            }
        }

        if (ok) {
            ans = min(ans, cost);
        }
    }

    cout << ans << endl;
    return 0;
}

