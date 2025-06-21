#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<vector<bool>> G(N+1,vector<bool>(N+1));

    for(int i=0;i<M;i++)
    {
        int u,v;
        cin>>u>>v;
        G[u][v]=G[v][u]=true;
    }

    int ans=0;
    for(int a=1;a<=N;++a)for(int b=a+1;b<=N;++b)
    {
        if(!G[a][b])continue;
        for(int c=b+1;c<=N;++c)if(G[b][c]&&G[c][a])ans++;
    }
    cout<<ans<<endl;
    return 0;
}

