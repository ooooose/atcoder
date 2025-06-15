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
    for(int i=0;i<N;i++)A[i]=i+1;
    long long offset=0;
    for(int i=0;i<Q;i++){
        int t;cin>>t;
        if(t==1){
            int p,x;cin>>p>>x;
            int idx=(offset+p-1)%N;
            A[idx]=x;
        }
        else if(t==2){
            int p;cin>>p;
            cout<<A[(offset+p-1)%N]<<endl;
        }
        else if(t==3){
            long long k;cin>>k;
            offset=(offset+k)%N;
        }
    }
}
