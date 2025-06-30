#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
int ans=0;
vector<int> A;
vector<bool> seen;

void dfs(int x)
{
    seen[x]=true;
    ans++;
    int nx=A[x-1];
    if(!seen[nx])dfs(nx);
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,X;cin>>N>>X;
    A.resize(N);
    seen.resize(N+1,false);
    for(int i=0;i<N;i++)cin>>A[i];

    dfs(X);
    cout<<ans<<endl;
    return 0;
}

