#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    vector<vector<int>> A(N);
    for(int i=0;i<N;i++)
    {
        int L;cin>>L;
        A[i].resize(L);
        for(int j=0;j<L;j++)cin>>A[i][j];
    }
    while(Q--)
    {
        int s,t;cin>>s>>t;
        cout<<A[s-1][t-1]<<endl;
    }
    return 0;
}

