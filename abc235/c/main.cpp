#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    map<int,vector<int>> mp;
    for(int i=0;i<N;i++)
    {
        int a;cin>>a; 
        mp[a].push_back(i+1);
    }
    while(Q--)
    {
        int x,k;cin>>x>>k;
        if(mp[x].size()<k)cout<<-1<<endl;
        else cout<<mp[x][k-1]<<endl;
    }
    return 0;
}

