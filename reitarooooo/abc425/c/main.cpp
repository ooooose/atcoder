#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    vector<int> A(N);
    vector<ll> sum(N+1);
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<N;i++)sum[i+1]=sum[i]+A[i];

    int offset=0;
    while(Q--)
    {
        int q;cin>>q;
        if(q==1)
        {
            int c;cin>>c;
            offset=(offset+c)%N;
        }
        if(q==2)
        {
            int l,r;cin>>l>>r;
            l--;r--;
            ll ans;
            l=(l+offset)%N;
            r=(r+offset)%N;
            if(l<=r)ans=sum[r+1]-sum[l];
            else ans=sum[N]-(sum[l]-sum[r+1]);
            cout<<ans<<'\n';
        }
    }
    
    return 0;
}

