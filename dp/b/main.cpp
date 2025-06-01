#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N, K, H[100009];
long long dp[100009];

int main() {
    cin >> N >> K;
    rep(i, N) cin >> H[i];

    rep(i, N) dp[i] = 1e9;
    dp[0] = 0;
    dp[1] = abs(H[1] - H[0]);

    for(int i = 2; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            if (j > i) continue;
            dp[i] = min(dp[i], dp[i-j] + abs(H[i] - H[i-j]));
        }
    }

    cout << dp[N-1] << endl;
    return 0;
}


