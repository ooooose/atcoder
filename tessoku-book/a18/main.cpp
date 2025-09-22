#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp


int N,S,A[63];
bool dp[69][10009];

int main() {
    cin>>N>>S;
    for(int i=1;i<=N;i++) cin>>A[i];

    dp[0][0]=true;
    for(int i=1;i<=S;i++)dp[0][i]=false;
    
    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<=S;j++)
        {
            if(j<A[i])
            {
                if(dp[i-1][j]) dp[i][j]=true;
                else dp[i][j]=false;
            }
            else
            {
                if(dp[i-1][j]||dp[i-1][j-A[i]]) dp[i][j]=true;
                else dp[i][j]=false;
            }
        }
    }

    if(dp[N][S]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

