#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using P = pair<int, int>;
using ll = long long;

// 薬の服薬量の合計がkを超えなくなる日を求める。
// 全ての薬の服薬量を合計する。（all）
// 日数が短い順にソートする。（昇順）
// 服薬量を減らしていき、合計がk以下になった時点の日付を出力する。
int main() {
    int n, k;
    cin >> n >> k;
    vector<P> medicines(n);
    ll all = 0;
    rep(i,n) {
        int a, b;
        cin >> a >> b;
        all += b;
        // aは日数、bは服薬量
        medicines[i] = {a, b};
    }
    // すでに服薬量の合計がKを超えている場合は1と出力
    if (all <= k) {
        cout << 1 << endl;
        return 0;
    }
    sort(medicines.begin(), medicines.end());
    for(auto [a,b] : medicines) {
        all -= b;
        if (all <= k) {
            cout << a+1 << endl;
            return 0;
        }
    }
    return 0;
}

