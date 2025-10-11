#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;cin>>T;
    while(T--){
        int N,M,K;cin>>N>>M>>K;
        string S;cin>>S;
        vector<vector<int>> g(N+1);
        for(int i=0;i<M;i++)
        {
            int u,v;cin>>u>>v;
            g[u].push_back(v);
        }
        int total=2*K;
        vector<vector<bool>> dp(total+1,vector<bool>(N+1,false));
        for(int v=1;v<=N;++v)dp[total][v]=S[v-1]=='A';

        for(int m=total-1;m>=0;--m)
        {
            bool alice=(m%2==0);
            if(alice)for(int v=1;v<=N;++v)
            {
                char win=false;
                for(int to: g[v])if(dp[m+1][to])
                {
                    win=true;
                    break;
                }
                dp[m][v]=win;
            } 
            else 
            {
                for(int v=1;v<=N;++v){
                    char all=true;
                    for(int to: g[v])if(!dp[m+1][to])
                    {
                        all=false;
                        break;
                    }
                    dp[m][v]=all;
                }
            }
        }
        cout<<(dp[0][1]?"Alice":"Bob")<<'\n';
    }
    return 0;
}
