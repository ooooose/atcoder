#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;

    map<int,int> mp;
    for(int i=1;i<=N;i++) mp[i]=1;

    while(Q--)
    {
        int x,y;cin>>x>>y;
        int ans=0;
        for(int i=1;i<=x;i++)
        {
            ans+=mp[i];
            mp[i]=0;
        }
        mp[y]+=ans;
        cout<<ans<<"\n";
    }
    
    return 0;
}

