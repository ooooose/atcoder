#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,K;
    cin>>N>>K;
    vector<vector<int>> graph(N);
    for(int i=0;i<N-1;i++){
        int u,v;
        cin>>u>>v;
        u--; v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<bool> required(N,false);
    vector<int> V(K);
    for(int i=0;i<K;i++){
        cin>>V[i];
        required[V[i]-1]=true;
    }

    vector<bool> keep(N,false);
    function<bool(int,int)> dfs=[&](int u, int parent)->bool{
        bool need=required[u];
        for (int v : graph[u]){
            if(v == parent)continue;
            if(dfs(v, u))need=true;
        }
        if(need) keep[u]=true;
        return need;
    };

    dfs(V[0]-1,-1);

    int ans = 0;
    for(auto flag : keep) {
        if(flag)ans++;
    }
    cout<<ans<<endl;
    return 0;
}

