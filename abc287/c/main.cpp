#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin>>N>>M;
    vector<vector<int>> Graph(N);
    rep(i,M){
        int u,v;
        cin>>u>>v;
        u--; v--;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }

    if(M!=N-1){
        cout<<"No"<<endl;
        return 0;
    }
    rep(i,N){
        if(Graph[i].size()>2){
            cout<<"No"<<endl;
            return 0;
        }
    }

    vector<bool> reach(N);
    queue<int> Q;
    reach[0]=true;
    Q.push(0);

    while(!Q.empty()){
        const int u=Q.front(); Q.pop();
        for(const int v : Graph[u]){
            if(!reach[v]){
                reach[v]=true;
                Q.push(v);
            }
        }
    }
    for(bool r : reach){
        if(!r){
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    return 0;
}

