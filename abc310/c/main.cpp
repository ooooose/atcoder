#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int n;
    cin >> n;
    set<string> stock;
    rep(i, n) {
        string s;
        cin >> s;
        string reverse_s = s;
        reverse(reverse_s.begin(), reverse_s.end()); // 文字列を反転
        if (stock.count(s) || stock.count(reverse_s)) continue; // すでに存在する場合はスキップ
        stock.insert(s); // 文字列をセットに追加
    }
    cout << stock.size() << endl; // 最終的なカウントを出力
    return 0;
}

