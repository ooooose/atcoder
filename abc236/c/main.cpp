#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<string> S(N);
    set<string> T;
    for(int i=0;i<N;i++)cin>>S[i];
    for(int i=0;i<M;i++)
    {
        string t;
        cin>>t;
        T.insert(t);
    }
    for(int i=0;i<N;i++)
    {
        if(T.count(S[i]))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

