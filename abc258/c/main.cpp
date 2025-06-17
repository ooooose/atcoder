#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    string S;cin>>S;
    long long offset=0;
    while(Q--){
        long long t,x;cin>>t>>x;
        if(t==1){
            offset+=x;
        }
        else if(t==2){
            int idx=x-offset%N-1;
            if(idx<0)idx+=N;
            cout<<S[idx]<<endl;
        }
    }
    
    return 0;
}

