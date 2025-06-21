#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 998244353;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,M,K;cin>>N>>M>>K;
    vector<vector<int>> dp(N+1,vector<int>(K+1,0));

    dp[0][0]=1;
    for(int i=0;i<N;i++)for(int s=0;s<=K;s++)
    {
        if(dp[i][s] == 0)continue;
        for(int a=1;a<=M;a++)if(s+a<=K)dp[i+1][s+a]=(dp[i+1][s+a]+dp[i][s])%MOD;
    }
    
    long long ans=0;
    for(int s=0;s<=K;s++)ans=(ans+dp[N][s])%MOD;
    cout<<ans<<endl;
    return 0;
}
