#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int H,W;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<string> grid;

bool in_grid(int x,int y)
{
    return x>=0&&x<W&&y>=0&&y<H;
}

void dfs(int x,int y, vector<vector<bool>>& visited)
{
    visited[y][x]=true;
    for(int d=0;d<4;d++)
    {
        int nx=x+dx[d];
        int ny=y+dy[d];
        if(in_grid(nx,ny)&&!visited[ny][nx])
        {
            if(grid[ny][nx]=='#')continue;
            dfs(nx,ny,visited);
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>H>>W;
    grid.resize(H);
    for(int i=0;i<H;i++)cin>>grid[i];
    pair<int,int> start,goal;
    for(int i=0;i<H;i++)for(int j=0;j<W;j++)
    {
        if(grid[i][j]=='s')start={j,i};
        else if(grid[i][j]=='g')goal={i,j};
    }

    vector<vector<bool>> visited(H,vector<bool>(W,false));
    dfs(start.first,start.second,visited);
    
    cout<<(visited[goal.first][goal.second]?"Yes":"No")<<endl;
    return 0;
}

