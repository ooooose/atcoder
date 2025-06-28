#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    map<string,int> mp;
    for(int i=0;i<N;i++)
    {
        string S;cin>>S;
        mp[S]++;
    }
    int vote=0;
    string cand;
    for(auto [s,x]: mp)
    {
        vote=max(vote,x);
        if(vote==x)cand=s;
    }
    cout<<cand<<endl;
    return 0;
}

