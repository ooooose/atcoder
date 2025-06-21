#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;cin>>N>>M;
    vector<pair<int,int>> edges(M+1);
    for (int i=1;i<=M;i++)
    {
        int u,v;
        cin>>u>>v;
        edges[i]={u,v};
    }
    
    int Q;cin>>Q;
    vector<int> queries(Q);
    for (int i=0;i<Q;i++)cin>>queries[i];
    
    dsu uf(N+1);
    vector<unordered_set<int>> nei(N+1);
    for (int i=1;i<=M;i++)
    {
        int u=edges[i].first,v=edges[i].second;
        nei[u].insert(v);
        nei[v].insert(u);
    }
    int global_edges = M;
    
    for (int qi=0;qi<Q;qi++)
    {
        int X=queries[qi];
        int u=edges[X].first,v=edges[X].second;
        int ru=uf.leader(u),rv=uf.leader(v);
        if(ru==rv)
        {
            cout<<global_edges<<"\n";
            continue;
        }
        if(nei[ru].count(rv)==0&&nei[rv].count(ru)==0)
        {
            cout<<global_edges<<"\n";
            continue;
        }
        if(nei[ru].size()>nei[rv].size())
        {
            swap(ru,rv);
        }
        int common=0;
        for(auto x:nei[ru])
        {
            x = uf.leader(x);
            if(nei[rv].count(x))common++;
        }
        int remove_edges=common+1;
        global_edges-=remove_edges;
 
        int new_rep=uf.merge(ru, rv);
        int old_rep=(new_rep==ru?rv:ru);
 
        for(auto x:nei[old_rep])
        {
            int rx=uf.leader(x);
            if(rx==new_rep)continue;
            nei[new_rep].insert(rx);
        }
        nei[new_rep].erase(new_rep);
        cout<<global_edges<<"\n";
    }
    return 0;
}

