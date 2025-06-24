#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

const int MOD=998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<vector<long long>> dp(N+1,vector<long long>(10,0));

    for(int d=1;d<=9;d++)dp[1][d]=1;
    for(int i=2;i<=N;i++)
    {
        for(int d=1;d<=9;d++)dp[i][d]=(dp[i-1][d-1]+dp[i-1][d]+dp[i-1][d+1])%MOD;
    }
    long long ans=0;
    for(int d=1;d<=9;d++)ans=(ans+dp[N][d])%MOD;
    cout<<ans<<endl;
    return 0;
}

