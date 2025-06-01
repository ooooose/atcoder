#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N;
// 静的配列の方がやりやすいらしい(メモリ確保が高速されて実行時間も少し早い？)
long long W, weight[110], value[110];
// 残りの重さを添字に持つDP配列(すべて初期値を0で設定)
long long dp[110][100100] = {0};

int main() {
    cin >> N >> W;
    rep(i, N) cin >> weight[i] >> value[i];

    // 品物の数だけループ
    for(int i = 0; i <N; i++) {
        // ナップザックの容量(W)ごとに最適な価値を計算する
        for (int w=0; w <= W; ++w) {
            // 品物iを選ぶ場合、ナップザックの容量からweignt[i]を差し引き、価値(value[i])を乗せる
            // weight[i]がナップザックの容量を超えない場合には品物を選び価値を乗せる
            if (w - weight[i] >= 0) dp[i+1][w] = max(dp[i+1][w], dp[i][w - weight[i]] + value[i]);
            // 品物iを選ばない場合は価値は乗らないのでdp[i+1]とdp[i]の大きいものをdp[i+1]として更新
            dp[i+1][w] = max(dp[i+1][w], dp[i][w]);
        }
    }

    // 上記DP処理をした結果のdp[N][W]を出力する
    cout << dp[N][W] << endl;
    return 0;
}

