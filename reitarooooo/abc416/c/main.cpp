#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N,K,X;
vector<string> ans,S;

void dfs(string cur,int count)
{
    if(count==K)
    {
        ans.push_back(cur);
        return;
    }

    for(string s: S)dfs(cur+s,count+1);
}

int main() {
    cin>>N>>K>>X;
    S.resize(N);
    for(int i=0;i<N;i++)cin>>S[i];
    
    dfs("",0);
    sort(ans.begin(),ans.end());
    cout<<ans[X-1]<<endl;
    return 0;
}
