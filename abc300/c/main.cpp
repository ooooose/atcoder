#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using P=pair<int,int>;

int H,W;
char C[109][109];

bool check(int x, int y) {
    bool flag=false;
    if(x+1>=H||x-1<0||y+1>=W||y-1<0) return flag;
    if(C[x+1][y+1]=='#'&&C[x+1][y-1]=='#'&&C[x-1][y+1]=='#'&&C[x-1][y-1]=='#') flag=true;
    return flag;
};

int main() {
    cin>>H>>W;
    rep(i,H)rep(j,W)cin>>C[i][j];
    int N=min(H,W); 
    vector<int> S(N,0);
    queue<P> Q;
    rep(i,H)rep(j,W)if(C[i][j]=='#'&&check(i,j))Q.push({i,j});

    while(!Q.empty()){
        auto [x,y]=Q.front();
        Q.pop();

        int d=0;
        while(true) {
            d++;
            if(x+d>=H||x-d<0||y+d>=W||y-d<0) break;
            int R=x+d;
            int L=x-d;
            int U=y-d;
            int D=y+d;
            if(C[R][U]=='.'||C[R][D]=='.'||C[L][U]=='.'||C[L][D]=='.') break;
        };
        // 0indexに修正で-1、breakした結果+1余分に長さを保持しているため-1
        d-=2;
        S[d]++;
    }
    for(auto s:S) cout<<s<<" ";
    cout<<endl;
    return 0;
}

