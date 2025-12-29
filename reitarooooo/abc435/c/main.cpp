#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N,A[500009],ans=0;

int dfs(int i)
{
    if(i==N-1)return i+1;
    int v=A[i]+i-1;
    if(A[v]==1)return v+1;
    return dfs(v);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N;
    for(int i=0;i<N;i++)cin>>A[i];

    ans=dfs(0);

    cout<<ans<<endl;
    return 0;
}

