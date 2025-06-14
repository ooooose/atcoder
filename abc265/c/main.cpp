#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W;cin>>H>>W;
    vector<string> G(H);
    vector<vector<bool>> visited(H,vector<bool>(W,false));
    for(int i=0;i<H;i++)cin>>G[i];

    map<char,pair<int,int>> move={
        {'U',{-1,0}},
        {'D',{1,0}},
        {'L',{0,-1}},
        {'R',{0,1}},
    };

    queue<pair<int,int>> Q;
    Q.push({0,0});
    while(!Q.empty()){
        auto [x,y]=Q.front();
        Q.pop();
        if(visited[x][y]==true){
            cout<<-1<<endl;
            break;
        }
        visited[x][y]=true;
        int nx=x+move[G[x][y]].first;
        int ny=y+move[G[x][y]].second;

        if(nx<0||nx>=H||ny<0||ny>=W){
            cout<<x+1<<" "<<y+1<<endl;
            break;
        }
        Q.push({nx,ny});
    }
    
    
    return 0;
}

