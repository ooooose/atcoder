#include<bits/stdc++.h>
using namespace std;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W;cin>>H>>W;
    vector<string> A(H);
    for(int i=0;i<H;i++)cin>>A[i];

    pair<int,int> start,goal;
    for(int i=0;i<H;i++)for(int j=0;j<W;j++)
    {
        if(A[i][j]=='S')start={i,j};
        if(A[i][j]=='G')goal={i,j};
    }

    vector<vector<vector<int>>> dist(H,vector<vector<int>>(W,vector<int>(2,-1)));
    queue<tuple<int,int,int>> que;
    dist[start.first][start.second][0]=0;
    que.push({start.first,start.second,0});

    while(!que.empty()) 
    {
        auto [x,y,s]=que.front();que.pop();
        for(int d=0;d<4;d++)
        {
            int nx=x+dx[d],ny=y+dy[d];
            int ns=s;
            if(nx<0||nx>=H||ny<0||ny>=W) continue;
            char cell=A[nx][ny];
            if(cell=='#')continue;
            if(cell=='o'&&ns==1)continue;
            if(cell=='x'&&ns==0)continue;
            if(cell=='?')ns^=1;
            if(dist[nx][ny][ns]!=-1)continue;
            dist[nx][ny][ns]=dist[x][y][s]+1;
            que.push({nx,ny,ns});
        }
    }

    int res0=dist[goal.first][goal.second][0];
    int res1=dist[goal.first][goal.second][1];
    int ans=-1;
    if(res0!=-1&&res1!=-1)ans=min(res0,res1);
    else if(res0!=-1)ans=res0;
    else if(res1!=-1)ans=res1;

    cout<<ans<<endl;
    return 0;
}

