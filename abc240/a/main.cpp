#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;cin>>a>>b;
    if(a<b) swap(a,b);
    if(abs(a-b)==1||(a==10&&b==1))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}

