#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    if(S=="red") cout<<"SSS"<<endl;
    else if(S=="blue") cout<<"FFF"<<endl;
    else if(S=="green") cout<<"MMM"<<endl;
    else cout<<"Unknown"<<endl;
    return 0;
}

