#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N,M;
    cin>>N>>M;
    vector<int> A(N),B(M);
    set<int> C;
    rep(i,N){
        cin>>A[i];
        C.insert(A[i]);
    }
    rep(i,M){
        cin>>B[i];
        C.insert(B[i]);
    }
    map<int,int> V;
    int idx=1;
    for(int x:C){
        V[x]=idx++;
    }

    rep(i,N)cout<<V[A[i]]<<" ";
    cout<<endl;

    rep(i,M)cout<<V[B[i]]<<" ";
    cout<<endl;

    return 0;
}

