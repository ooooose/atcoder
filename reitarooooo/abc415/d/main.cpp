#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll N;
    int M;
    cin>>N>>M;

    vector<tuple<ll,ll,ll>> C;
    for(int i=0;i<M;i++)
    {
        ll a,b;cin>>a>>b;
        ll d=a-b;
        C.emplace_back(d,a,b);
    }

    sort(C.begin(),C.end());

    ll ans=0;
    for(auto [d,a,b]:C)
    {
        if(a>N) continue;
        ll x=(N-a)/d+1;
        ans+=x;
        N-=x*d;
    }

    cout<<ans<<endl;
    return 0;
}

