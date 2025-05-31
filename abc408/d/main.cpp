#include <bits/stdc++.h>
using namespace std;

// 問題：文字列Sを0と1飲みからなる文字列に変換する。
// ただし、「1が連続する区間を1つ」になるようにしたい。
// 操作は 0 ↔ 1 の反転で、反転回数の最小値を求める。

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> c(n+1);

    // c[i]: 先頭からi文字までの「0を+1」「1を-1」として見た累積和
    // この数列cに注目することで、1の連続区間をどこにおくかのコストが計算できる
    // s[i] == '0'のとき +1, '1'のとき-1を加算する
    for(int i = 0; i < n; i++) c[i+1] = c[i] + (s[i] == '0' ? 1 : -1);

    // 文字列全体の1の個数を数える(これはどこに区間をおいても共通なので固定値)
    int sum = count(s.begin(), s.end(), '1');

    // ma: ここまでのc[i]の最大値を保持（c[l]の最大）
    // res: 操作量の差分（c[r] - c[l] の最小）を記録
    int ma = 0;
    int res = 0;

    // 全てのiについて、最小のc[r] - maを計算
    // 区間外の1の削除と、区間内の0の変換をまとめて計算
    for(int i=0; i <= n; i++) {
        // 最小コストを更新
        res = min(res, c[i] - ma);
        // 現在までの最大c[i]を更新
        ma = max(ma, c[i]);
    } 


    // 答えは「全体の1の数+上記で求めた差分最小」
    cout << sum + res << endl;
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
