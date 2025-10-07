#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;

    vector<int> pc(N+1,1);
    pc[0]=0;
    int o=1;
    while(Q--)
    {
        int x,y;cin>>x>>y;
        int ans=0;
        while(o<=x)
        {
            ans+=pc[o];
            pc[y]+=pc[o];
            o++;
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}

