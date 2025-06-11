#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W;cin>>H>>W;
    vector<vector<int>> S(H,vector<int>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++)cin>>S[i][j];
    }
    vector<vector<int>> DP(H,vector<int>(W,0));
    for(int i=0;i<W;i++)DP[0][i]=S[0][i];

    for(int i=1;i<H;i++){
        for(int j=0;j<W;j++){
            if(j-1>=0&&j+1<W)DP[i][j]=S[i][j]+max({DP[i-1][j-1],DP[i-1][j],DP[i-1][j+1]});
            else if(j==0)DP[i][j]=S[i][j]+max(DP[i-1][j],DP[i-1][j+1]);
            else if(j+1==W)DP[i][j]=S[i][j]+max(DP[i-1][j-1],DP[i-1][j]);
        }
    }
    int ans=0;
    for(int i=0;i<W;i++)ans=max(ans,DP[H-1][i]);
    cout<<ans<<endl;
    return 0;
}

