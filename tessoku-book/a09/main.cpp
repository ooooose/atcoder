#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int H,W,N;cin>>H>>W>>N;
    vector<vector<int>> G(H,vector<int>(W,0));

    while(N--)
    {
        int a,b,c,d;cin>>a>>b>>c>>d;
        G[a-1][b-1]++;
        G[a-1][d]--;
        G[c][b-1]--;
        G[c][d]++;
    }

    for(int i=0;i<H;i++)
    {
        for(int j=1;j<W;j++)G[i][j]+=G[i][j-1];
    }

    for(int i=1;i<H;i++)
    {
        for(int j=0;j<W;j++)G[i][j]+=G[i-1][j];
    }

    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)cout<<G[i][j]<<(j!=W-1?" ":"");
        cout<<endl;
    }
    
    
    return 0;
}

