#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,R;cin>>N>>R;
    vector<int> L(N);
    for(int i=0;i<N;i++)cin>>L[i];
    vector<int> open;

    for(int i=0;i<N;i++)if(L[i]==0)open.push_back(i);

    int l=N,r=0;
    for(int i=0;i<N;i++)if(L[i]==0)
    {
        l=i;
        break;
    }

    for(int i=N-1;i>=0;i--)if(L[i]==0)
    {
        r=i;
        break;
    }

    int t=0;

    if(l<=R-1)for(int i=l+1;i<R;i++)if(L[i]==1)t++;
    if(r>=R)for(int i=R;i<r;i++)if(L[i]==1)t++;

    int ans=2*t+(int)open.size();

    cout<<ans<<endl;
    return 0;
}
