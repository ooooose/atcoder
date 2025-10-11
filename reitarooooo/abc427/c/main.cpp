#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,M;cin>>N>>M;
    vector<pair<int,int>> E(M);

    for (int i=0;i<M;i++)
    {
        int u,v;cin>>u>>v;
        --u;--v;
        E.emplace_back(u,v);
    }

    int mx=0;
    for (int bit=0;bit<(1<<N);bit++)
    {
        int keep=0;
        for (auto [u, v]: E)if(((bit>>u)&1)!=((bit>>v)&1))keep++;
        mx=max(mx,keep);
    }

    cout<<M-mx<<endl;
    return 0;
}
