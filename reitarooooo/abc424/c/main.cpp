#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

using Graph=vector<vector<int>>;

vector<bool> seen;

void dfs(const Graph &G, int v)
{
    seen[v]=true;

    for(int u: G[v])
    {
        if(seen[u]) continue;
        dfs(G,u);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    Graph G(N+1);
    seen.resize(N+1);
    vector<int> skills;
    for(int i=1;i<=N;i++)
    {
        int A,B;cin>>A>>B;
        if(A==0&&B==0){ 
            skills.push_back(i);
            continue;
        }
        G[A].push_back(B);
        G[B].push_back(A);
    }

    for(int s: skills) dfs(G,s);

    int cnt=0;
    for(bool s: seen)if(s)cnt++;

    cout<<cnt<<endl;
    return 0;
}

