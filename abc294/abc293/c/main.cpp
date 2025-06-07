#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

using P=pair<int,int>;

int H,W;
int A[10][10];
int ans=0;
void dfs(int i, int j,set<int>& seen){
    if(seen.count(A[i][j])) return;
    seen.insert(A[i][j]);

    if(i==H-1&&j==W-1){
        ans++;
    }else{
        if(i+1<H) dfs(i+1,j,seen);
        if(j+1<W) dfs(i,j+1,seen);
    }

    seen.erase(A[i][j]);
}

int main() {
    cin>>H>>W;
    rep(i,H)rep(j,W)cin>>A[i][j];
    set<int> seen;
    dfs(0,0,seen);
    cout<<ans<<endl;
    return 0;
}

