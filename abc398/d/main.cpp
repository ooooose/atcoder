#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

// 焚き火から生成される煙を動かすのではなく、煙と高橋くんを動かす。
// 煙が動く方向とは逆の方向に動かす。

int main() {
    // 煙の動き方を定義
    map<char, P> move = {
        {'N', {-1, 0}},
        {'S', {1, 0}},
        {'E', {0, 1}},
        {'W', {0, -1}}
    };
    // 煙の位置を保持するためのset
    set<P> smokes;
    // nは指令の個数、(r, c)は高橋くんの位置
    int n, r, c;
    cin >> n >> r >> c;
    string s;
    cin >> s;
    // 煙の初期値を設定
    int current_x = 0, current_y = 0;

    // 煙の初期値をsmokesに追加
    smokes.insert({current_x, current_y});
    string result = "";
    rep(i, s.size()) {
        char d = s[i];
        int dx = move[d].first;
        int dy = move[d].second;

        current_x -= dx;
        current_y -= dy;
        smokes.insert({current_x, current_y});
        r -= dx;
        c -= dy;
        if (smokes.count({r, c})) result.append("1");
        else result.append("0");
    }
    cout << result << endl;
    return 0;
}

