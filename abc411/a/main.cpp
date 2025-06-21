#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string p;cin>>p;
    int l;cin>>l;
    cout<<(l<=(int)p.size()?"Yes":"No")<<endl;
    return 0;
}

