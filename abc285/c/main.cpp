#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S; cin>>S;
    int l=(int)S.size()-1;
    long long ans=0;
    for(int i=l;i>=0;i--){
        int x=S[i]-'A'+1;
        ans+=(long long)x*pow(26,l-i);
    }
    cout<<ans<<endl;
    
    return 0;
}

