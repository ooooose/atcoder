#include<bits/stdc++.h>
using namespace std;
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin>>N;
    vector<vector<int>> G(N,vector<int>(N));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>G[i][j];
        }
    }
    vector<vector<int>> DP(N,vector<int>(N));
    DP[0][0]=G[0][0];
    for(int i=1;i<N;++i){
        DP[i][0]=DP[i-1][0]+G[i][0];
        DP[0][i]=DP[0][i-1]+G[0][i];
    }
    for(int i=1;i<N;++i){
        for(int j=1;j<N;++j){
            DP[i][j]=max(DP[i-1][j], DP[i][j-1])+G[i][j];
        }
    }
    cout<<DP[N-1][N-1]<<endl;
    return 0;
}

