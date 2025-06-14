#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,M;
    cin>>N>>M;
    
    vector<vector<pair<int,int>>> G(N+1);
    for (int i=0;i<M;i++){
        int u,v,w;cin>>u>>v>>w;
        G[u].push_back({v,w});
    }
    
    const int S_SIZE = 1024;
    vector<vector<bool>> reached(N+1,vector<bool>(S_SIZE,false));

    queue<pair<int,int>> q;
    reached[1][0]=true;
    q.push({1,0});
    
    while(!q.empty()){
        auto [u,s]=q.front();
        q.pop();
        for(const auto &edge:G[u]){
            int v=edge.first;
            int w=edge.second;
            int ns=s^w;
            if(!reached[v][ns]){
                reached[v][ns]=true;
                q.push({v,ns});
            }
        }
    }
    
    int ans=-1;
    for(int s=0;s<S_SIZE;s++){
        if(reached[N][s]){ 
            ans=s;
            break;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
