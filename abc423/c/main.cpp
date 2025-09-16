#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,R;cin>>N>>R;
    vector<int> L(N);
    for(int i=0;i<N;i++)cin>>L[i];
    R--;

    int left=R,right=R;
    for(int i=0;i<N;i++)
    {
        if(L[i]==1) continue;
        left=min(left,i-1);
        right=max(right,i);
    }
    int ans=0;
    for(int i=left+1;i<=right;i++)
    {
        ans+=L[i]+1;
    }

    cout<<ans<<endl;
    return 0;
}

