#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,X;cin>>N>>X;
    for(int i=1;i<=N;i++){
        int P;cin>>P;
        if(P==X){
            cout<<i<<endl;
            return 0;
        }
    }
    
    return 0;
}

