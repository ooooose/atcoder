#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N,X,Y;
const int MAXN=2e5+5;
vector<int> G[MAXN];
vector<int> path;
bool visited[MAXN];
int parent[MAXN];

bool dfs(int v,int goal){
    visited[v]=true;
    if(v==goal)return true;
    for(int u:G[v]){
        if(!visited[u]){
            parent[u]=v;
            if(dfs(u,goal))return true;
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>X>>Y;
    for(int i=0;i<N-1;i++){
        int u,v;cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    parent[X]=-1;
    dfs(X,Y);
    vector<int> res;
    for(int v=Y;v!=-1;v=parent[v]){
        res.push_back(v);
    }
    reverse(res.begin(),res.end());
    for(int v:res)cout<<v<<" ";
    cout<<endl;
    return 0;
}

