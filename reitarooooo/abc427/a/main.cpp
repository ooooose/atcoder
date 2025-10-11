#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int center=((int)S.size()+1)/2;

    cout<<S.substr(0,center-1)+S.substr(center,S.size())<<endl;
    return 0;
}

