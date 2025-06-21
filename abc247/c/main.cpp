#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    
    vector<vector<int>> dp(N+1);

    dp[1]={1};

    for(int i=2;i<=N;++i)
    {
        dp[i]=dp[i-1];
        dp[i].push_back(i);
        dp[i].insert(dp[i].end(),dp[i-1].begin(),dp[i-1].end());
    }
    for(int i:dp[N])cout<<i<<" ";
    cout<<endl;

    return 0;
}

