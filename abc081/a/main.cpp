#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin>>S;
    int ans=0;
    rep(i,S.size()){
        if(S[i]-'0'==1)ans++;
    }
    cout<<ans<<endl;
    return 0;
}

