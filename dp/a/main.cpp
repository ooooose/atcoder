#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N, H[100009];
int dp[100009];

int main() {
    cin >> N;
    rep(i, N) cin >> H[i];

    dp[0] = 0;
    dp[1] = abs(H[1]-H[0]);

    for(int i = 2; i < N; i++) {
        dp[i] = min(dp[i-2] + abs(H[i] - H[i-2]),dp[i-1] + abs(H[i]-H[i-1]));
    }

    cout << dp[N-1] << endl;
    return 0;
}

