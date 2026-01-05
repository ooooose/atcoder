#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    string S,T;cin>>S>>T;

    vector<string> cand;
    for(int i=0;i<=(int)S.size()-T.size();i++)cand.push_back(S.substr(i,(int)T.size()));

    int ans=1e9;
    for(string c: cand)
    {
        int temp=0;
        for(int i=0;i<(int)c.size();i++)
        {
            int diff=(c[i]-'0')-(T[i]-'0');
            if(diff<0)diff+=10;
            temp+=diff;
        }
        ans=min(ans,temp);
    }
    
    cout<<ans<<endl;
    return 0;
}
