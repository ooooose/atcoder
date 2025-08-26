#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    vector<int> A(N),B(N);
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<N;i++)cin>>B[i];
    int total=0;
    for(int i=0;i<N;i++)
    {
        total+=min(A[i],B[i]);
    }
    while(Q--)
    {
        char c;cin>>c;
        int x,v;cin>>x>>v;
        x--;
        total-=min(A[x],B[x]);
        if(c=='A')A[x]=v;
        else if(c=='B')B[x]=v;
        total+=min(A[x],B[x]);
        cout<<total<<endl;
    }
    return 0;
}

