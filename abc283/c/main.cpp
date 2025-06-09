#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int ans=0;
    while(!empty(S)){
        const auto back{S.back()};
        S.pop_back();
        if(back=='0'&&S.back()=='0')S.pop_back();
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}

