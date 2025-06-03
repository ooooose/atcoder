#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    string S;
    cin >> S;
    vector<int> ids;

    // bit全探索で桁を選ぶか選ばないかの判定をする
    // 桁が最も大きいものを候補として最大の桁数を保持する
    int ans = 0;
    for(int bit = 0; bit < (1 << S.size()); ++bit) {
        ids.clear();
        for(int i = 0; i < S.size(); ++i) {
            if (bit & (1<<i)) {
                ids.push_back(i);
            }
        }
        int sum = 0;

        for(int id : ids) {
            sum+=S[id] - '0';
        }
        if(sum%3 == 0) ans = max(ans, (int)ids.size());
    }

    if (ans==0) cout << - 1 << endl;
    else cout << S.size() - ans << endl;

    return 0;
}

