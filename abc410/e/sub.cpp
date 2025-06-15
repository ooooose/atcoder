#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N,H,M;
int dp[3001][3001];
int A[3000],B[3000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>H>>M;
    for(int i=0;i<N;i++)cin>>A[i]>>B[i];
    int ans=0;
    for(int h=0;h<=H;h++)for(int m=0;m<=M;m++){
        ans=max(ans,dp[h][m]);
        if(dp[h][m]<N){
            int a=A[dp[h][m]],b=B[dp[h][m]];
            if(h+a<=H)dp[h+a][m]=max(dp[h+a][m],dp[h][m]+1);
            if(m+b<=M)dp[h][m+b]=max(dp[h][m+b],dp[h][m]+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
