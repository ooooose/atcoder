#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    long long T;
    cin>>N>>T;
    vector<long long> A(N);
    long long total=0;
    rep(i,N){
        cin>>A[i];
        total+=A[i];
    }
    long long tmod=T%total;
    for(int i=0;i<N;i++){
        if(tmod<A[i]){
            cout<<i+1<<" "<<tmod<<endl;
            return 0;
        }
        tmod-=A[i];
    }
    cout<<N<<" "<<tmod<<endl;
    return 0;
}

