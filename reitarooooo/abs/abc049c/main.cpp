#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

const vector<string> strs={"dream","dreamer","erase","eraser"};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;

    vector<bool> dp(S.size()+1,false);
    dp[0]=true;

    for(int i=1;i<=(int)S.size();i++)
    {
        for(string str: strs)
        {
            if(i>=str.size() && dp[i-str.size()] && S.substr(i-str.size(),str.size())==str)dp[i]=true;
        }
    }
    if(dp[S.size()])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}

