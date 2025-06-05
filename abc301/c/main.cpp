#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    string S,T;
    cin>>S>>T;
    map<char, int> s_mp, t_mp;
    string atcoder = "atcoder";

    int s_at = 0, t_at = 0;

    for (char c : S) {
        if (c == '@') s_at++;
        else s_mp[c]++;
    }

    for (char c : T) {
        if (c == '@') t_at++;
        else t_mp[c]++;
    }

    // atcoder以外の文字列について出現回数が一致しないならNoを出力
    for (char c = 'a'; c <= 'z'; c++) {
        if (atcoder.find(c) == string::npos) {
            if (s_cnt[c] != t_cnt[c]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    // atcoderの文字列の場合、@を変換してS,Tの差分を補えるかをチェック
    for (char c : atcoder) {
        if (s_cnt[c] < t_cnt[c]) {
            s_at -= (t_cnt[c] - s_cnt[c]);
        } else {
            t_at -= (s_cnt[c] - t_cnt[c]);
        }
    }

    // s_at, t_atが負数になったら補えないことを意味するのでNo、ともに0以上であればYesを出力する
    if (s_at >= 0 && t_at >= 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
