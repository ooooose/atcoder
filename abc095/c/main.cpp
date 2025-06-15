#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B,C,X,Y;
    cin>>A>>B>>C>>X>>Y;
    long long cost=1e9;
    for(int ab=0;ab<201010;ab++){
        long long sm=C*ab;
        long long x=X-ab/2;
        long long y=Y-ab/2;
        if(0<x)sm+=x*A;
        if(0<y)sm+=y*B;

        cost=min(cost,sm);
    }
    cout<<cost<<endl;
    return 0;
}

