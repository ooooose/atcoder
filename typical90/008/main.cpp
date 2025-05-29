#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using ll = long long;
const int MOD = 1000000007;
const string T= "atcoder";

// DPらしい、dp[i][j]に文字列Sの最初のi文字目から何文字目かを抜き出して繋げる方法のうち、それが`atcoder`の最初のj文字まで一致するような方法の個数
// 文字列Sの最初のi文字までについての解(dp[i])からi+1文字までについての解(dp[i+1])を更新する。
// この時S[i]を選ぶか選ばないかで判定する


void add(int &a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
}

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<vector<int>> dp(N+1, vector<int>(T.size()+1,0));

    // 初期化
    dp[0][0] = 1;


    for(int i =0; i < N; ++i) {
        for (int j = 0; j <= T.size(); ++j) {
            add(dp[i+1][j], dp[i][j]);

            if(j < T.size() && S[i] == T[j]) {
                add(dp[i+1][j+1], dp[i][j]);
            }
        }
    }

    cout << dp[N][T.size()] << endl;
    return 0;
}

