#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;cin>>N>>K;
    vector<int> A(N+K);
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=N;i<N+K;i++)A[i]=0;
    for(int i=K;i<N+K;i++)cout<<A[i]<<(i+1!=N+K?" ":"");
    cout<<endl;
    return 0;
}

