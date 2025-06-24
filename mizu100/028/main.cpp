#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<vector<int>> graph(N+1);
    for(int i=0;i<N;i++)
    {
        int u,k;cin>>u>>k;
        for(int j=0;j<k;j++)
        {
            int v;cin>>v;
            graph[u].push_back(v);
        }
    }
    vector<int> dist(N+1,-1);
    queue<int> Q;

    dist[1]=0;
    Q.push(1);

    while(!Q.empty())
    {
        int v=Q.front();Q.pop();
        for(int u: graph[v])
        {
            if(dist[u]==-1)
            {
                dist[u]=dist[v]+1;
                Q.push(u);
            }
        }
    }

    for(int i=1;i<=N;i++) cout<<i<<" "<<dist[i]<<"\n";

    return 0;
}

