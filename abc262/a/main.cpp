#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Y;cin>>Y;
    Y-=2;
    if(Y%4==0)cout<<Y+2<<endl;
    else cout<<4*(Y/4+1)+2<<endl;
    return 0;
}

