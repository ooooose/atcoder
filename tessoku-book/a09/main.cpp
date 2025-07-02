#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int H,W,N;cin>>H>>W>>N;
    vector<vector<int>> G(H+2,vector<int>(W+2,0));

    while(N--)
    {
        int a,b,c,d;cin>>a>>b>>c>>d;
        G[a][b]++;
        G[a][d+1]--;
        G[c+1][b]--;
        G[c+1][d+1]++;
    }

    for(int i=1;i<=H;i++)
    {
        for(int j=1;j<=W;j++)G[i][j]+=G[i][j-1];
    }

    for(int i=1;i<=H;i++)
    {
        for(int j=1;j<=W;j++)G[i][j]+=G[i-1][j];
    }

    for(int i=1;i<=H;i++)
    {
        for(int j=1;j<=W;j++)cout<<G[i][j]<<(j!=W?" ":"");
        cout<<endl;
    }
    
    
    return 0;
}

