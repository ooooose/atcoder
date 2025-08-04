#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,K,X;cin>>N>>K>>X;
    
    vector<string> S(N);
    for (int i=0;i<N;i++)cin>>S[i];
    
    sort(S.begin(),S.end());
    
    vector<int> indices(K,0);
    X--;
    
    for (int i=K-1;i>=0;i--)
    {
        indices[i]=X%N;
        X/=N;
    }
    
    string result;
    for (int i=0;i<K;i++)result+=S[indices[i]];
    
    cout<<result<<endl;
    return 0;
}


