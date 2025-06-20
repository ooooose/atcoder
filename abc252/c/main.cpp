#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    int cnt[10][10];
    int ans,mx;
    for(int i=0;i<10;i++)for(int j=0;j<10;j++)cnt[i][j]=0;

    cin>>N;
    vector<string> S(N);
    for(int i=0;i<N;i++)cin>>S[i];
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<10;j++)
        {
            cnt[(S[i][j]-'0')][j]++;
        }
    }
    ans=1000;
    for(int i=0;i<10;i++)
    {
        mx=0;
        for(int j=0;j<10;j++)
        {
            mx=max(mx,10*(cnt[i][j]-1)+j);
        }
        ans=min(ans,mx);
    }
    cout<<ans<<endl;
    return 0;
}



