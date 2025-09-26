#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W;cin>>H>>W;
    vector<string> S(H);
    for(int i=0;i<H;i++)cin>>S[i];

    vector<pair<int,int>> mp={{1,0},{-1,0},{0,1},{0,-1}};

    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            if(S[i][j]=='#')
            {
                int cnt=0;
                for(int k=0;k<4;k++)
                {
                    int ni=i+mp[k].first;
                    int nj=j+mp[k].second;
                    if(ni<0||ni>=H||nj<0||nj>=W)continue;
                    if(S[ni][nj]=='#')cnt++;
                }
                if(cnt!=2&&cnt!=4)
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"Yes"<<endl;
    return 0;
}

