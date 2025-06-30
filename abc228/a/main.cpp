#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int S,T,X;cin>>S>>T>>X;
    if(T==0)T=24;
    S*=60; 
    T*=60; 
    X*=60; 
    X+=30;
    if(S<X&&X<T)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

