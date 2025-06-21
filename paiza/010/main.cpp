#include <bits/stdc++.h>
using namespace std;
int H,W;
vector<string> grid;

int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
 
bool in_grid(int x,int y)
{
    return x>=0&&x<H&&y>=0&&y<W;
}
 
void dfs(int x,int y,vector<vector<bool>>& visited,int& cnt) 
{
    visited[x][y]=true;
    cnt++;
    for(int d=0;d<4;d++)
    {
        int nx=x+dx[d],ny=y+dy[d];
        if(in_grid(nx,ny)&&!visited[nx][ny]&&grid[nx][ny]=='#')dfs(nx, ny, visited, cnt);
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>H>>W;
    grid.resize(H);
    for (int i=0;i<H;i++)cin>>grid[i];

    int total=0;
    for (int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)if(grid[i][j]=='#')total++;
    }
    
    int allowed=0;
    for(int i=0;i<H;i++)for(int j=0;j<W;j++)
    {
        if (grid[i][j]=='.')
        {
            allowed++;
            continue;
        }
        grid[i][j]='.';
        int cnt=0;
        bool found=false;
        vector<vector<bool>> visited(H,vector<bool>(W,false));
        for (int x=0;x<H&&!found;x++)for(int y=0;y<W&&!found;y++)
        {
            if (grid[x][y]=='#')
            {
                dfs(x,y,visited,cnt);
                found=true;
            }
        }
        if (!found||cnt==total-1)allowed++;
        grid[i][j]='#';
    }

    cout<<allowed<<endl;
    return 0;
}
