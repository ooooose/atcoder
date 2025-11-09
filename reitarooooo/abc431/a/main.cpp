#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,B;cin>>H>>B;
    if(H>B)cout<<H-B<<endl;
    else cout<<0<<endl;
    
    return 0;
}

