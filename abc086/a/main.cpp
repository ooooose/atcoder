#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B;
    cin>>A>>B;
    if(A*B%2==0) cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;

    return 0;
}

