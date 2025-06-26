#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<string> S(N);
    for(int i=0;i<N;i++)cin>>S[i];

    bool ans=false;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            int cnt;
            if((i+5)<N)
            {
                cnt=0;
                for(int k=0;k<6;k++) if(S[i+k][j]=='#')cnt++;
                if(cnt>=4) ans=true;
            }
            if((j+5)<N)
            {
                cnt=0;
                for(int k=0;k<6;k++) if(S[i][j+k]=='#')cnt++;
                if(cnt>=4) ans=true;
            }
            if((i+5)<N&&(j+5)<N)
            {
                cnt=0;
                for(int k=0;k<6;k++) if(S[i+k][j+k]=='#')cnt++;
                if(cnt>=4) ans=true;
            }
            if(0<=(i-5)&&(j+5)<N)
            {
                cnt=0;
                for(int k=0;k<6;k++) if(S[i-k][j+k]=='#')cnt++;
                if(cnt>=4) ans=true;
            }
        }
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}

