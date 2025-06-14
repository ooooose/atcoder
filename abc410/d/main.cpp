#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<vector<pair<int,int>>> G;
vector<int> dist;
vector<int> basis;
vector<bool> visited;

void insert_basis(int x){
    for(int i=9;i>=0;i--){
        if(!(x&(1<<i)))continue;
        if(basis[i]==0){
            basis[i]=x;
            return;
        }
        x^=basis[i];
    }
}

int query_min(int x){
    for(int i=9;i>=0;i--){
        if(basis[i]!=0)x=min(x,x^basis[i]);
    }
    return x;
}

void dfs(int u){
    visited[u]=true;
    for(auto [v,w]:G[u]){
        int val=dist[u]^w;
        if (dist[v]==-1){
            dist[v]=val;
            if(!visited[v])dfs(v);
        } else {
            int cycle=val^dist[v];
            if(cycle!=0)insert_basis(cycle);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>N>>M;
    G.assign(N+1,vector<pair<int,int>>());
    basis.assign(10,0);
    visited.assign(N+1,false);
    
    for (int i=0;i<M;++i){
        int u,v,w;cin>>u>>v>>w;
        G[u].push_back({v,w});
    }
    
    dist.assign(N+1,-1);
    
    dist[1]=0;
    dfs(1);
    if(dist[N]==-1){
        cout<<-1<<endl;
        return 0;
    }
    int ans=query_min(dist[N]);
    cout<<ans<<endl;
    return 0;
}
