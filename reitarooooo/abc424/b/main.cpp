#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M,K;
    cin>>N>>M>>K;

    vector<vector<int>> ans(N+1);

    for(int i=0;i<K;i++)
    {
        int A,B;cin>>A>>B;
        ans[A].push_back(B);
        if(ans[A].size()==M)cout<<A<<" ";
    }
    cout<<endl;
    
    return 0;
}

