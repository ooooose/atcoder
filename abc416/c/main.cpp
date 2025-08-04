#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int N, K, X;
vector<string> S;
vector<string> ans;

void dfs(string crr, int count) 
{
    if(count==K)
    {
        ans.push_back(crr);
        return;
    }
    for(int i=0;i<N;i++)dfs(crr+S[i],count+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>N>>K>>X;
    
    S.resize(N);
    for (int i=0;i<N;i++)cin >> S[i];
    
    dfs("", 0);
    sort(ans.begin(),ans.end());
    
    cout<<ans[X-1]<<endl;
    return 0;
}


