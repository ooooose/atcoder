#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin>>N>>M;
    dsu D(N);
    rep(i,M){
        int u,v; cin>>u>>v;
        u--;v--;
        D.merge(u,v);
    }

    cout<<D.groups().size()<<endl;
    return 0;
}

