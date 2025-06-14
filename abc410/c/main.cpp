#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;
    cin>>N>>Q;
    vector<int> A(N);
    rep(i,N)A[i]=i+1;
    
    long long offset = 0;
    while(Q--){
        int type;
        cin>>type;
        if(type==1){
            int p,x;
            cin>>p>>x;
            int idx=(offset+(p-1))%N;
            A[idx]=x;
        }
        else if(type==2){
            int p;
            cin>>p;
            int idx=(offset+(p-1))%N;
            cout<<A[idx]<<"\n";
        }
        else if(type==3){
            long long k;
            cin>>k;
            k%=N;
            offset=(offset+k)%N;
        }
    }
    return 0;
}
