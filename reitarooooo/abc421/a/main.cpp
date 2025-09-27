#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<string> S(N);
    for(int i=0;i<N;i++)cin>>S[i];
    
    int X;
    string Y;
    cin>>X>>Y;

    if(S[X-1]==Y) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

