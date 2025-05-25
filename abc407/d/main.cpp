#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int h, w;
vector<vector<ll>> a;

ll dfs(int mask, int pos) {
    if (pos == h * w) {
        ll xor_sum = 0;
        for (int i = 0; i < h * w; ++i) {
            if (!(mask & (1 << i))) {
                int r = i / w, c = i % w;
                xor_sum ^= a[r][c];
            }
        }
        return xor_sum;
    }

    int r = pos / w, c = pos % w;

    if (mask & (1 << pos)) {
        return dfs(mask, pos + 1);
    }

    ll max_score = dfs(mask, pos + 1);

    if (c + 1 < w && !(mask & (1 << (pos + 1)))) {
        int new_mask = mask | (1 << pos) | (1 << (pos + 1));
        max_score = max(max_score, dfs(new_mask, pos + 1));
    }

    if (r + 1 < h && !(mask & (1 << (pos + w)))) {
        int new_mask = mask | (1 << pos) | (1 << (pos + w));
        max_score = max(max_score, dfs(new_mask, pos + 1));
    }

    return max_score;
}

int main() {
    cin >> h >> w;
    a.resize(h, vector<ll>(w));
    rep(i, h) {
        rep(j, w) {
            cin >> a[i][j];
        }
    }

    cout << dfs(0, 0) << endl;
    return 0;
}
