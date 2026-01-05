#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;cin>>N;
    vector<int> C(N+1);

    for(int i=1;i*i<=N;i++)for(int j=i+1;i*i+j*j<=N;j++)C[i*i+j*j]++;

    vector<int> ans;
    for(int n=1;n<=N;n++)if(C[n]==1)ans.push_back(n);

    cout<<ans.size()<<endl;
    for(int i=0;i<(int)ans.size();i++)cout<<ans[i]<<(i!=(int)ans.size()?" ":"");
    cout<<endl;
    return 0;
}

