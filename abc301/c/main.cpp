#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    string S,T;
    cin>>S>>T;
    map<char, int> s_cnt, t_cnt;
    string atcoder = "atcoder";

    int s_at = 0, t_at = 0;

    for (char c : S) {
        if (c == '@') s_at++;
        else s_cnt[c]++;
    }

    for (char c : T) {
        if (c == '@') t_at++;
        else t_cnt[c]++;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (atcoder.find(c) == string::npos) {
            // a~z のうち atcoder にない文字が不一致なら失敗
            if (s_cnt[c] != t_cnt[c]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    for (char c : atcoder) {
        if (s_cnt[c] < t_cnt[c]) {
            s_at -= (t_cnt[c] - s_cnt[c]);
        } else {
            t_at -= (s_cnt[c] - t_cnt[c]);
        }
    }

    if (s_at >= 0 && t_at >= 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
