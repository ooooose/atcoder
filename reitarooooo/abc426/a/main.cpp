#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, int> mp={{"Ocelot", 1}, {"Serval", 2}, {"Lynx", 3}};
    string X,Y;
    cin>>X>>Y;

    if(mp[X]>=mp[Y]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}

