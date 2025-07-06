#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

const int MOD=998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long A,B,C,D,E,F;cin>>A>>B>>C>>D>>E>>F;
    int x=((A%MOD)*(B%MOD))%MOD;
    x=(x*(C%MOD))%MOD;
    int y=((D%MOD)*(E%MOD))%MOD;
    y=(y*(F%MOD))%MOD;

    cout<<(x-y)%MOD<<endl;
    return 0;
}

