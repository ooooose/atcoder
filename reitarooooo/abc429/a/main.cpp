#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;

    for(int i=1;i<=N;i++)
    {
        if(i<=M)cout<<"OK"<<endl;
        else cout<<"Too Many Requests"<<endl;
    }
    
    return 0;
}

