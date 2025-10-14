#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    string S,T;cin>>S>>T;
    vector<int> imos(N+1,0);

    while(M--)
    {
        int l,r;cin>>l>>r;
        l--;
        imos[l]++;
        imos[r]--;
    }
    for(int i=1;i<N;i++)imos[i]+=imos[i-1];
    string ans="";
    for(int i=0;i<N;i++)
    {
        if(imos[i]%2==0)ans+=S[i];
        else ans+=T[i];
    }
    
    cout<<ans<<endl;
    return 0;
}

