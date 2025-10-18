#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;cin>>N>>K;
    string S;cin>>S;
    map<string,int> mp;

    for(int i=0;i<N-K+1;i++)mp[S.substr(i,K)]++;

    int mx=0;
    for(auto [s,c]: mp)mx=max(mx,c);

    vector<string> ans;

    for(auto [s,c]: mp)if(c==mx)ans.push_back(s);

    sort(ans.begin(),ans.end());
    cout<<mx<<endl;
    for(int i=0;i<(int)ans.size();i++)cout<<ans[i]<<(i+1!=(int)ans.size()?" ":"");
    cout<<endl;
    return 0;
}

