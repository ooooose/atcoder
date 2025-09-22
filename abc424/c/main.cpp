#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N;
vector<int> G[2<<17];
bool vis[2<<17];

void dfs(int u)
{
    vis[u]=true;
    for(auto v:G[u])if(!vis[v])dfs(v);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        int a,b;cin>>a>>b;
        G[a].push_back(i);
        G[b].push_back(i);
    }
    dfs(0);
    int ans=0;
    for(int i=1;i<=N;i++)ans+=vis[i];

    cout<<ans<<endl;
    return 0;
}

