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
        // 現時点のSの末尾を一旦backという変数に代入している
        const auto back{S.back()};
        // pop_backで末尾を削除
        S.pop_back();
        // backが0でS.back()も0の場合はもう1回pop_backできる
        if(back=='0'&&S.back()=='0')S.pop_back();
        ans++;
    }
    
    cout<<ans<<endl;

    return 0;
}

