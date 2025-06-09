#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;cin>>N;
    vector<int> X(N);
    vector<long long> P(N);
    for(int i=0;i<N;i++)cin>>X[i];
    for(int i=0;i<N;i++)cin>>P[i];

    vector<long long> S(N+1,0);
    for(int i=0;i<N;++i)S[i+1]=S[i]+P[i];
    int Q;cin>>Q;
    while(Q--){
        int L,R;cin>>L>>R;
        int l=lower_bound(X.begin(),X.end(),L)-X.begin();
        int r=upper_bound(X.begin(),X.end(),R)-X.begin();
        cout<<S[r]-S[l]<<endl;
    }

    
    return 0;
}

