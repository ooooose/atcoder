#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int R,C;cin>>R>>C;
    pair<int,int> S,G;
    cin>>S.first>>S.second;
    cin>>G.first>>G.second;
    vector<string> T(R);
    for(int i=0;i<R;i++)cin>>T[i];

    vector<vector<int>> V(R,vector<int>(C,-1));
    queue<pair<int,int>> Q;

    Q.push({S.first-1,S.second-1});
    V[S.first-1][S.second-1]=0;
    const vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
    while(!Q.empty())
    {
        auto [y,x]=Q.front();Q.pop();
        for(int i=0;i<4;i++)
        {
            int nx=x+dir[i][0];
            int ny=y+dir[i][1];
            if(ny<0||ny>=R||nx<0||nx>=C)continue;
            if(T[ny][nx]=='#'||V[ny][nx]!=-1)continue;
            V[ny][nx]=V[y][x]+1;
            Q.push(make_pair(ny,nx));
        }
    }
    cout<<V[G.first-1][G.second-1]<<endl;
    return 0;
}

