#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    map<string,int> S;
    while(N--){
        string s;cin>>s;
        if(S[s]==0)cout<<s<<endl;
        else{
            cout<<s<<"("<<S[s]<<")"<<endl;
        }
        S[s]++;
    }
    
    return 0;
}

