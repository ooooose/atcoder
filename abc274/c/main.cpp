#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i];

    vector<int> D(2*N+2,0);
    
    for(int i=1;i<=N;i++){
        int p=A[i-1];
        int c1=2*i;
        int c2=2*i+1;

        D[c1]=D[p]+1;
        D[c2]=D[p]+1;
    }
    for(int i=1;i<=2*N+1;i++)cout<<D[i]<<"\n";
    return 0;
}

