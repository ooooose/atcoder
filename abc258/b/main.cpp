#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;

    vector<string> grid(N);
    for(int i=0;i<N;i++)cin>>grid[i];

    string ans="0";

    for(int i=0;i<N;i++)for(int j=0;j<N;j++)
    {
        for(int di=-1;di<=1;di++)for(int dj=-1;dj<=1;dj++)
        {
            if(di==0&&dj==0)continue;
            string path;
            int ci=i,cj=j;

            for(int step=0;step<N;step++)
            {
                if(ci<0||ci>=N||cj<0||cj>=N)break;

                path+=grid[ci][cj];

                ci=(ci+di+N)%N;
                cj=(cj+dj+N)%N;
            }
            if(path>ans) ans=path;
        }
    }

    cout<<ans<<endl;
    return 0;
}

