#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll n;
    int m;
    cin >> n >> m;

    set<pair<ll, ll>> visited;
    vector<pair<int, int>> moves = {
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };

    rep(i, m) {
        ll x, y;
        cin >> x >> y;

        visited.insert({x, y});

        for (auto [dx, dy] : moves) {
            ll nx = x + dx, ny = y + dy;
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
                visited.insert({nx, ny});
            }
        }
    }

    cout << n * n - visited.size() << endl;

    return 0;
}