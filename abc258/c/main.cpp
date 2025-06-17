#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    string S;cin>>S;
    int offset=0;
    while(Q--){
        int t,x;cin>>t>>x;
        x%=N;
        if(t==1){
            offset=(offset-x)%N;
            if(offset<0)offset+=N;
        }
        else if(t==2){
            cout<<S[(offset+x-1)%N]<<endl;
        }
    }
    
    return 0;
}

