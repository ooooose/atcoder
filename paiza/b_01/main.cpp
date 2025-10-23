#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
int dx[]={-1,-0,1,0,1,1,-1,-1};
int dy[]={0,-1,-0,1,-1,1,-1,1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<vector<int>> stones(N,vector<int>(N)), correct(N,vector<int>(N,-1));

    queue<pair<int,int>> q;
    int c=(N+1)/2;
    q.push(make_pair(c-1,c-1));
    correct[c-1][c-1]=c;

    while(q.size())
    {
        auto [x,y]=q.front();q.pop();
        int cur=correct[x][y];

        for(int i=0;i<8;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];

            if(nx<0||nx>=N||ny<0||ny>=N)continue;
            if(correct[nx][ny]!=-1)continue;

            correct[nx][ny]=cur-1;
            q.push(make_pair(nx,ny));
        }
    }


    int ans=0;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)
    {
        int target;cin>>target;
        ans+=target-correct[i][j];
    }

    cout<<ans<<endl;
    return 0;
}

