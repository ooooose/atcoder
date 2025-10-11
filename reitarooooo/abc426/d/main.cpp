#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

void solve()
{
    int N;
    string S;
    cin>>N>>S;

    vector<int> cnt(2);
    vector<pair<char,int>> d(1,{S[0],0});

    for(auto c: S) 
    {
        cnt[c-'0']++;
        if(d.back().first==c) d.back().second++;
        else d.emplace_back(c,1);
    }

    int ans=N*2;
    for(auto [c, num]: d)
    {
        int i=c-'0';
        vector<int> ncnt=cnt;

        ncnt[i]-=num;
        int now=ncnt[i]*2+ncnt[i^1];
        ans=min(ans,now);
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--) solve();
    
    return 0;
}

