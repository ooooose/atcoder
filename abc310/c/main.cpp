#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

// setを使って、文字列を格納する。
// 入力された文字列、もしくは反転した物がすでにstockに存在すれば処理をスキップ
// そうでなければ、文字列をSetに追加する。
// 最終的なstockのサイズが答えになる。
int main() {
    int n;
    cin >> n;
    set<string> stock;
    rep(i, n) {
        string s;
        cin >> s;
        string reverse_s = s;
        reverse(reverse_s.begin(), reverse_s.end());
        if (stock.count(s) || stock.count(reverse_s)) continue;
        stock.insert(s);
    }
    cout << stock.size() << endl;
    return 0;
}

