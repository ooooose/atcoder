#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double A,B,D;cin>>A>>B>>D;
    double rad=D*M_PI/180.0;

    double a_prime=A*cos(rad)-B*sin(rad);
    double b_prime=A*sin(rad)+B*cos(rad);

    cout<<fixed<<setprecision(20)<<a_prime<<" "<<b_prime<<endl;
    
    return 0;
}

