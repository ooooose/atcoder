#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

vector<vector<int>> G;
vector<bool> visited;
vector<int> d,f;
int time_stamp=0;

void dfs(int v)
{
    visited[v]=true;
    d[v]=++time_stamp;
    for(int u: G[v])if(!visited[u])dfs(u);

    f[v]=++time_stamp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    G.resize(N+1);
    visited.resize(N+1,false);
    d.resize(N+1);
    f.resize(N+1);

    for(int i=1;i<=N;i++)
    {
        int u,k;cin>>u>>k;
        G[u].resize(k);
        for(int j=0;j<k;j++)cin>>G[u][j];
    }

    for(int i=1;i<=N;i++)if(!visited[i]) dfs(i);

    for(int i=1;i<=N;i++)cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
    return 0;
}
