#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,K;cin>>N>>K;

    vector<vector<int>> T(N,vector<int>(N));
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)cin>>T[i][j];
    vector<int> edges;
    for(int i=1;i<=N;i++)edges.push_back(i);
    int ans=0;
    do{
        int cost=0;
        for(int i=0;i<N-1;i++)cost+=T[edges[i]-1][edges[i+1]-1];
        cost+=T[edges.back()-1][0];
        if(cost==K)ans++;
    }while(next_permutation(edges.begin()+1,edges.end()));
    cout<<ans<<endl;
    return 0;
}

