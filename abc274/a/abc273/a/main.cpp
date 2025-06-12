#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W,sy,sx,N;
    cin>>H>>W>>sy>>sx>>N;
    vector<string> S(H);
    for(int i=0;i<H;i++)cin>>S[i];

    map<int,char> turns;
    for(int i=0;i<N;i++){
        int t;
        char d;
        cin>>t>>d;
        turns[t]=d;
    }
    vector<int> dx={-1,0,1,0};
    vector<int> dy={0,1,0,-1};

    int dir=0;
    for(int t=0;t<100;t++){
        if(turns.count(t)){
            if(turns[t]=='L'){
                dir=(dir+3)%4;
            }
            else{
                dir=(dir+1)%4;
            }
        }
        int ny=sy+dx[dir];
        int nx=sx+dy[dir];

        if(nx<0||ny>=H||nx<0|nx>=W||S[ny][nx]=='#'){
            cout<<"Stop"<<endl;
            return 0;
        }
        sy=ny;
        sx=nx;
        cout<<sy<<" "<<sx<<endl;
    }

    return 0;
}
