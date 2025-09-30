#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin>>A[i];

    int offset=0;
    while(Q--)
    {
        int q;cin>>q;
        if(q==1)
        {
            int c;cin>>c;
            offset=(offset+c)%N;
        }
        else if(q==2)
        {
            int l,r,ans=0;cin>>l>>r;
            l--;r--;
            l=(l+offset)%N;
            r=(r+offset)%N;
            if(l<=r)for(int i=l;i<=r;i++)ans+=A[i];
            else
            {
                for(int i=l;i<N;i++)ans+=A[i];
                for(int i=0;i<=r;i++)ans+=A[i];
            }
            cout<<ans<<endl;
        }
    }
    
    return 0;
}

