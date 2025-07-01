#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
// g++ -std=c++23 main.cpp

int main() {
    int N,Q;cin>>N>>Q;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    vector<int> sum(N+1);
    for(int i=1;i<=N;i++)sum[i]=sum[i-1]+A[i-1];

    while(Q--)
    {
        int l,r;cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
    return 0;
}

