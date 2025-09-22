#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

long long N,W,wei[109],val[109],dp[109][100009];

int main() {
    cin>>N>>W;
    for(int i=1;i<=N;i++) cin>>wei[i]>>val[i];

    dp[0][0]=0;
    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(j<wei[i]) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j], dp[i-1][j-wei[i]]+val[i]);
        }
    }

    long long ans=0;
    for(int i=0;i<=W;i++) ans=max(ans, dp[N][i]);

    cout<<ans<<endl;
    return 0;
}

