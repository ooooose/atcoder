#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int n, a[100009], b[100009];
int dp[100009];

int main() {
    cin >> n;
    // 必要な配列の受け取り
    for(int i = 2; i <= n; i++) cin >> a[i];
    for(int i = 3; i <= n; i++) cin >> b[i];

    // dpの初期化
    // 部屋1に要する時間は移動しなくても行けるので`dp[0] = 0`となる
    // 部屋1から2にはaの最初の値であるa[2]でしか到達できないためdp[2]を代入
    dp[1] = 0;
    dp[2] = a[2];
    // 方法aでいくかbでいくかの最小値をdp配列に保存
    for (int i=3; i <= n; i++) dp[i] = min(dp[i-1] + a[i], dp[i-2] + b[i]);

    // 部屋nに移動する最小時刻dp[n]を出力
    cout << dp[n] << endl;
    return 0;
}

