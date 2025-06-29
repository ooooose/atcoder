#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,W;cin>>N>>W;
    vector<pair<int,int>> C(N);
    for(int i=0;i<N;i++)cin>>C[i].first>>C[i].second;
    sort(C.rbegin(),C.rend());
    long long ans=0;
    for(int i=0;i<N;i++)
    {
        int diff=C[i].second;
        if(W<C[i].second)diff=W;
        ans+=(long long)diff*C[i].first;
        W-=diff;
        if(W<0)break;
    }
    cout<<ans<<endl;
    return 0;
}

