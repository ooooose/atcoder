#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P =pair<int,int>;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);

    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];
    int wa=0,ac=1e9;
    while(wa+1<ac){
        int wj=(wa+ac)/2;
        int na=0,nb=0;
        rep(i,N)if(A[i]<=wj)na++;
        rep(i,M)if(B[i]>=wj)nb++;
        if(na>=nb) ac=wj;
        else wa=wj;
    }
    cout<<ac<<endl;
    return 0;
}

