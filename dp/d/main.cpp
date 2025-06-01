#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N;
long long W, weight[120], value[110];
// 重さ、価値の総和を持つDP配列
long long dp[110][100100] = {0};

int main() {
    cin >> N >> W;

    rep(i, N) cin >> weight[i] >> value[i];

    for(int i = 0; i <N; i++) {
        for (int w=0; w <=W; ++w) {
            if (w - weight[i] >= 0) dp[i+1][w] = max(dp[i+1][w], dp[i][w - weight[i]] + value[i]);
            dp[i+1][w] = max(dp[i+1][w], dp[i][w]);
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}

