#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    map<char,int> mp;
    for(int i=0;i<(int)S.size();i++)mp[S[i]]++;
    for(auto [c,i]: mp)
    {
        if(i==1)
        {
            cout<<c<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

