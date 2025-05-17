#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

// ２次元累積和を使って横方向・縦方向の合計値を求める。
// 縦方向、横方向の合計値の二次元配列を作成する。
// その後、二次元配列の各要素を横方向、縦方向の合計値から、元の値を1回引くことで正解の要素が求まる。

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    vector<int> row(h), col(w);
    rep(i, h) rep(j ,w) cin >> a[i][j];
    rep(i, h) {
        int sum = 0;
        rep(j, w) {
            sum += a[i][j];
        }
        row[i] = sum;
    }
    rep(j, w) {
        int sum = 0;
        rep(i, h) {
            sum += a[i][j];
        }
        col[j] = sum;
    }

    rep(i, h) {
        rep(j, w) {
            cout << row[i] + col[j] - a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

