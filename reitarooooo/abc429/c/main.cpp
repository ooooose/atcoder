#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;cin>>N;
    vector<int> A(N);
    map<int,long long> cnt;

    for (int i=0;i<N;i++) 
    {
        cin>>A[i];
        cnt[A[i]]++;
    }

    long long ans=0;
    for(auto [x,c]: cnt)
    {
        if(c>=2)ans+=(c*(c-1)/2)*(N-c);
    }

    cout<<ans<<endl;
    return 0;
}
