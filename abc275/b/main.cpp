#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

const long long MOD=998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long A,B,C,D,E,F;cin>>A>>B>>C>>D>>E>>F;
    cout<<((A*B*C)-(D*E*F))%MOD<<endl;
    return 0;
}

