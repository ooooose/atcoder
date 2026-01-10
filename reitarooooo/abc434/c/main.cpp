#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

void solve()
{
    int N,H;
    cin>>N>>H;
    vector<int> T(N),L(N),U(N);
    for(int i=0;i<N;i++) cin>>T[i]>>L[i]>>U[i];

    int prev_t=0,l=H,u=H;
    for(int i=0;i<N;i++)
    {
        int d=T[i]-prev_t;
        l-=d; u+=d;

        prev_t=T[i];

        l=max(l,L[i]);
        u=min(u,U[i]);
        
        if(l>u)
        {
            cout<<"No"<<endl;
            return;
        }
    }

    cout<<"Yes"<<endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;

    while(T--) solve();
    
    return 0;
}

