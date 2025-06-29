#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N;
vector<vector<bool>> original;
vector<pair<int,int>> edges;
int ans=INT_MAX;

void dfs(int idx,vector<int>& degree,int ops)
{
    if(ops>=ans)return;
    if(idx==(int)edges.size())
    {
        bool valid=true;
        for(int i=1;i<=N;i++)
        {
            if (degree[i]!=2)
            {
                valid=false;
                break;
            }
        }
        if(valid)ans=min(ans,ops);
        return;
    }
    
    for(int i=1;i<=N;i++)if(degree[i]>2)return;
    
    int u=edges[idx].first;
    int v=edges[idx].second;
    bool exists=original[u][v];
    
    degree[u]++;
    degree[v]++;
    int nops=ops+(exists?0:1);
    dfs(idx+1,degree,nops);

    degree[u]--;
    degree[v]--;
    nops=ops+(exists?1:0);
    dfs(idx+1,degree,nops);
}

int main() {
    cin>>N;
    int M;cin>>M;
    
    original.assign(N+1,vector<bool>(N+1,false));
    
    for(int i=0;i<M;i++) 
    {
        int a,b;cin>>a>>b;
        original[a][b]=original[b][a]=true;
    }
    
    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=N;j++)edges.push_back({i,j});
    }
    
    vector<int> degree(N+1,0);
    dfs(0,degree,0);
    
    cout<<ans<<endl;
    return 0;
}
