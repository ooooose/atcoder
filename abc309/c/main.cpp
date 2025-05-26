#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using P = pair<int, int>;
using ll = long long;

// A日間の設定が最も多いものから順に服薬量を足す。
// 上記の1回分の服薬量を降順に足し上げていき、Kを超えたら終了。
// 超える前の日数が答え。
int main() {
    int n, k;
    cin >> n >> k;
    vector<P> medicines(n);
    ll all = 0;
    rep(i,n) {
        int a, b;
        cin >> a >> b;
        all += b;
        medicines[i] = {a, b}; // {日数, 服薬量}
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

