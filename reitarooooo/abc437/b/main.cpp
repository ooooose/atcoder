#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W,N;
    cin>>H>>W>>N;

    vector<vector<int>> grid(H,vector<int>(W));

    for(int i=0;i<H;i++)for(int j=0;j<W;j++)cin>>grid[i][j];

    vector<vector<bool>> judge(H,vector<bool>(W,false));

    while(N--)
    {
        int B;cin>>B;
        for(int i=0;i<H;i++)for(int j=0;j<W;j++)
        {
            if(grid[i][j]==B)judge[i][j]=true;
        }
    }

    int ans=0;
    for(int i=0;i<H;i++)
    {
        int tmp=0;
        for(int j=0;j<W;j++)
        {
            if(judge[i][j])tmp++;
        }
        ans=max(ans,tmp);
    }

    cout<<ans<<endl;
    return 0;
}

