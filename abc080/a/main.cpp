#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,A,B;
    cin>>N>>A>>B;
    if(N*A<=B)cout<<N*A<<endl;
    else cout<<B<<endl;
    
    return 0;
}

