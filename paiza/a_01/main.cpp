#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W;cin>>H>>W;
    vector<vector<char>> G(H,vector<char>(W));
    vector<vector<int>> vis(H,vector<int>(W,-1));

    pair<int,int> start;
    for(int i=0;i<H;i++)for(int j=0;j<W;j++) 
    {
        char c;cin>>c;
        if(c=='S')start={i,j};
        G[i][j]=c;
    }

    queue<pair<int,int>> q;
    q.push(start);
    vis[start.first][start.second]=0;

    while(q.size())
    {
        auto [x,y]=q.front();q.pop();
        int cur=vis[x][y];

        for(int d=0;d<4;d++)
        {
            int nx=x+dx[d];
            int ny=y+dy[d];

            if(nx<0||nx>=H||ny<0||ny>=W)continue;
            if(G[nx][ny]=='#'||vis[nx][ny]!=-1)continue;

            vis[nx][ny]=cur+1;
            q.push(make_pair(nx,ny));
        }
    }

    bool ok=false;
    for(int i=0;i<W;i++)if(vis[0][i]!=-1)ok=true;
    for(int i=0;i<W;i++)if(vis[H-1][i]!=-1)ok=true;
    for(int i=0;i<H;i++)if(vis[i][0]!=-1)ok=true;
    for(int i=0;i<H;i++)if(vis[i][W-1]!=-1)ok=true;


    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

