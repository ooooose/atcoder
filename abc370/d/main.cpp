#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H,W,Q;cin>>H>>W>>Q;
    vector<vector<bool>> G(H,vector<bool>(W,false));
    int ans=H*W;
    vector<int> dx={0,0,-1,1};
    vector<int> dy={1,-1,0,0};
    for(int qi=0;qi<Q;qi++){
        int x,y;
        cin>>x>>y;
        x--;y--;
        if(!G[x][y]){
            G[x][y]=true;
            ans--;
        }
        else{
            for(int i=0;i<4;i++){
                int nx=x,ny=y;
                while(true){
                    nx+=dx[i];
                    ny+=dy[i];
                    if(nx<0||nx>=H||ny<0||ny>=W)break;
                    if(!G[nx][ny]){
                        G[nx][ny]=true;
                        ans--;
                        break;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    
    return 0;
}

