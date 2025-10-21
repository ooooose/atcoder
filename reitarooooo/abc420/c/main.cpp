#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    vector<int> A(N),B(N),mins(N);
    ll ans=0;
    for(int i=0;i<N;i++)
    {
        int a;cin>>a;
        A[i]=a;
        mins[i]=a;
    }
    for(int i=0;i<N;i++)
    {
        int b;cin>>b;
        B[i]=b;
        mins[i]=min(mins[i],b);
    }
    for(int i=0;i<N;i++)ans+=(ll)mins[i];
    for(int i=0;i<Q;i++)
    {
        char c;
        int x,v;
        cin>>c>>x>>v;
        x--;

        if(c=='A')A[x]=v;
        else B[x]=v;

        ans-=(ll)mins[x]-min(A[x],B[x]);
        mins[x]=min(A[x],B[x]);

        cout<<ans<<endl;
    }
    return 0;
}

