#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int N;
long long A[100009][3];
long long dp[100009][3];

int main() {
    cin >> N;
    rep(i, N) rep(j, 3) cin >> A[i][j];

    rep(j, 3) dp[0][j] = A[0][j];

    for(int i = 1; i < N; i++) {
        for(int j = 0; j < 3; ++j) {
            rep(k, 3) {
                if(j == k) continue;
                dp[i][j] = max(dp[i][j], dp[i-1][k] + A[i][j]);
            }
        }
    }

    long long ans = 0;
    rep(j, 3) ans = max(ans, dp[N-1][j]);
    cout << ans << endl;
    return 0;
}

