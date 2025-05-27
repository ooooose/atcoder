#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

// わからないのでギブアップ
int main() {
    int n, w;
    cin >> n >> w;

    // 各列ごとのブロックを管理
    vector<vector<int>> columns(w + 1);
    vector<int> x(n), y(n);

    // 入力を受け取り、列ごとにブロックを分類
    rep(i, n) {
        cin >> x[i] >> y[i];
        columns[x[i]].push_back(y[i]);
    }

    // 各列のブロックをソートしていく
    for (int i = 1; i <= w; i++) {
        sort(columns[i].begin(), columns[i].end());
    }

    // d(各ブロックが消えるタイミング)を計算する
    vector<ll> times(n + 2, LLONG_MAX); // d[c]を管理する
    times[1] = 0;

    for (int i = 1; i <= w; i++) {
        int c = columns[i].size();
        rep(j, c) {
            times[j + 1] = max(times[j + 1], (ll)columns[i][j]);
        }
        times[c + 1] = LLONG_MAX;
    }

    // d[c] を更新
    for (int i = 2; i <= n + 1; i++) {
        times[i] = max(times[i], times[i - 1] + 1);
    }

    // 質問に答える
    int q;
    cin >> q;
    while (q--) {
        ll t;
        int a;
        cin >> t >> a;
        a--; // 0インデックスに調整

        // ブロックaが時刻 t+0.5に存在するかを確認する
        if (t < times[a + 1]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

