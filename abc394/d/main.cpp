#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;

    stack<char> st;

    // 対応するかっこを保存するマップ
    map<char, char> pairs = {
        {'(', ')'},
        {'[', ']'},
        {'<', '>'}
    };

    for (char c : s) {
        if (c =='(' || c == '[' || c == '<') {
            // 開くかっこが来た場合はスタックに積む
            st.push(c);
        } else if (c == ')' || c == ']' || c == '>') {
            // 閉じるかっこが来た場合はスタックからポップして対応するかっこを確認
            // 対応するかっこがない場合は不正なかっこ列
            if (st.empty() || pairs[st.top()] != c) {
                cout << "No" << endl;
                return 0;
            }
            // 対応するかっこがある場合はスタックからポップする
            st.pop();
        }
    }

    cout << (st.empty() ? "Yes" : "No") << endl;
    return 0;
}

