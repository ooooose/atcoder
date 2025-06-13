#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> P(N);
    for(int i=0;i<N;i++)cin>>P[i];
    vector<int> cnt(N,0);
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++)cnt[(P[i]-1-i+j+N)%N]++;
    }
    int ans=0;
    for(int i=0;i<N;i++)ans=max(ans,cnt[i]);

    cout<<ans<<endl;
    return 0;
}

