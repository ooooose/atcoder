#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;cin>>N>>K;
    vector<int> A(N),B(N);
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<N;i++)cin>>B[i];

    vector<vector<bool>> dp(N,vector<bool>(2,false));
    dp[0][0]=dp[0][1]=true;

    for(int i=1;i<N;i++)
    {
        if(dp[i-1][0])
        {
            if(abs(A[i-1]-A[i])<=K)dp[i][0]=true;
            if(abs(A[i-1]-B[i])<=K)dp[i][1]=true;
        }
        if(dp[i-1][1])
        {
            if(abs(B[i-1]-A[i])<=K)dp[i][0]=true;
            if(abs(B[i-1]-B[i])<=K)dp[i][1]=true;
        }
    }

    if(dp[N-1][0]||dp[N-1][1])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

