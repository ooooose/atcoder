#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

long long ans=1;
vector<vector<int>> G;

void dfs(long long x, vector<bool> &seen){
    seen[x]=true;
    ans=max(ans,x);

    for(auto nxt : G[x]){
        if(!seen[nxt]) dfs(nxt,seen);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    vector<pair<long long,long long>> AB(N);
    set<long long> floors;

    for(int i=0;i<N;i++){
        long long A,B;cin>>A>>B;
        AB[i]=make_pair(A,B);
        floors.insert(A);
        floors.insert(B);
    }
    map<long long,int> zip;
    vector<long long> unzip;
    int id=0;

    for(auto f:floors){
        zip[f]=id++;
        unzip.push_back(f);
    }
    G.resize(id);
    vector<bool> seen(id,false);

    for(auto [A,B]:AB){
        int u=zip[A],v=zip[B];
        G[u].push_back(v);
        G[v].push_back(u);
    }


    if(zip.count(1)){
        dfs(zip[1], seen);
        cout<<unzip[ans]<<endl;
    }
    else cout<<1<<endl;

    return 0;
}

