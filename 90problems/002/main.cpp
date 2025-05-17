#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

// bit全探索、かっこのはじめを0としてかっこの終わりを1とする
// scoreを用意してかっこ列を左から見ていく。かっこの始まりが来たらscore++
// かっこの終わりが来たらscore--して、scoreの値が0になったらだめで0であれば正しいかっこ列と言える。
// 計算量はO(N2^N)となる。

bool is_valid(const string& s) {
    int score = 0;
    for(auto c : s) {
        if (c == '(') score++;
        else if (c == ')') score--;

        if (score < 0) return false; // 閉じかっこが先に来た場合
    }
    return score == 0; // 最後にscoreが0であれば正しいかっこ列
}

int main() {
    int n;
    cin >> n;
    for (int bit = 0; bit < (1 << n); bit++) {
        string s = "";
        for(int i = n -1; i >= 0; i--) {
            if(!(bit & (1 << i))) s += '(';
            else s += ')';
        }
        if (is_valid(s))cout << s << endl;
    }

    return 0;
}

