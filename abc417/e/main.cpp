#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

const string target="fre";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    map<char,int> mp;

    for(char s:S)mp[s]++;

    int ans=1e9;
    for(char t:target)
    {
        int cnt=mp[t];
        if(t=='e')cnt/=3;
        ans=min(cnt, ans);
    }
    cout<<ans<<endl;
    return 0;
}

