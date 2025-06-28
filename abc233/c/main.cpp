#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using ll=long long;

int N;
ll X;
vector<vector<ll>> bags;
int ans=0;
void dfs(int i,ll prod)
{
    if(prod>X)return;
    if(X%prod!=0)return;

    if(i==N)
    {
        if(prod==X)ans++;
        return;
    }
    for(ll a: bags[i])
    {
        if(prod>X/a)continue;
        dfs(i+1,prod*a);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>X;
    bags.resize(N);
    for(int i=0;i<N;++i)
    {
        int L;cin>>L;
        bags[i].resize(L);
        for(int j=0;j<L;j++)cin>>bags[i][j];
    }
    dfs(0,1);
    cout<<ans<<endl;
    return 0;
}

