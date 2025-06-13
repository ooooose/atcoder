#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<long long> A(N);
    for(int i=0;i<N;i++)cin>>A[i]; 
    vector<long long> sum(N+1);
    for(int i=1;i<=N;i++)sum[i]=sum[i-1]+A[i-1];
    vector<long long> sumi(N-M+1);
    long long now=0;
    for(int i=0;i<M;i++)now+=A[i]*(i+1);
    sumi[0]=now;
    for(int i=1;i<N-M+1;i++)sumi[i]=sumi[i-1]+M*A[M+i-1]-(sum[M+i-1]-sum[i-1]);
    long long ans=-1000000000000000000ll;
    for(int i=0;i<N-M+1;i++)ans=max(ans,sumi[i]);
    cout<<ans<<endl;
    return 0;
}

