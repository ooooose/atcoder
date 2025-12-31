#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;cin>>N;
    vector<vector<int>> A(N,vector<int>(N,-1));

    pair<int,int> vis={0,(N-1)/2%N};
    A[vis.first][vis.second]=1;

    for(int i=2;i<=N*N;i++)
    {
        int k=(vis.first-1+N)%N;
        int v=(vis.second+1)%N;
        if(A[k][v]==-1)A[k][v]=i;
        else
        {
            k=(vis.first+1)%N;
            v=vis.second;
            A[k][v]=i;
        }

        vis={k,v};
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)cout<<A[i][j]<<(j!=N-1?" ":"");
        cout<<endl;
    }
    return 0;
}

