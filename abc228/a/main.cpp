#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int S,T,X;cin>>S>>T>>X;
    if(S<T)cout<<(S<=X&&X<T?"Yes":"No")<<endl;
    else cout<<(X<T||S<=X?"Yes":"No")<<endl;
    return 0;
}

