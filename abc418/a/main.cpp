#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    string S; cin>>S;
    const string tea="tea";
    if(N<3)
    {
        cout<<"No"<<endl;
    }
    else
    {
        int start = N-3;
        if(S.substr(start)==tea)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
}

