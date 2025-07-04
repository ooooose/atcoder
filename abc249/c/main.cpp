#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;cin>>N>>K;
    vector<string> S(N);
    for(int i=0;i<N;i++) cin>>S[i];
    int ans=0;
    for(int bit=0;bit<(1<<N);bit++)
    {
        map<char,int> smap;
        for(int i=0;i<N;i++) if(bit&(1<<i))
        {
            for(char c: S[i]) smap[c]++;
        }
        int cur=0;
        for(auto& [c,cnt]: smap)
        {
            if(cnt==K)cur++;
        }
        ans=max(ans,cur);
    }
    cout<<ans<<endl;
    return 0;
}

