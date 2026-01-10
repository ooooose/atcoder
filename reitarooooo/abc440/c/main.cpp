#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using ll = long long;

void solve()
{
    int N,W; cin>>N>>W;

    vector<ll> C(N);
    for(int i=0;i<N;i++)cin>>C[i];

    int M=2*W;
    vector<ll> A(M,0);

    for (int i=0;i<N;i++)
    {
        int r=(i+1)%M;
        A[r]+=C[i];
    }

    vector<ll> pref(2*M+1,0);
    for (int i=0;i<2*M;i++)pref[i+1]=pref[i]+A[i%M];

    ll ans = LLONG_MAX;

    for (int s=0;s<M;s++)
    {
        ll sum=pref[s+W]-pref[s];
        ans=min(ans,sum);
    }

    cout<<ans<<'\n';
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--) solve();
    
    return 0;
}

