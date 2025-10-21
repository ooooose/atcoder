#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N,K;
    long long X;
    cin>>N>>K>>X;
    vector<string> S(N);
    for(int i=0;i<N;i++)cin>>S[i];
    
    sort(S.begin(),S.end());
    
    X--;

    vector<int> idx(K);
    for(int i=K-1;i>=0;i--)
    {
        idx[i]=X%N;
        X/=N;
    }

    string ans;
    for (int i=0;i<K;i++)ans+=S[idx[i]];
    cout<<ans<<endl;
    return 0;
}
