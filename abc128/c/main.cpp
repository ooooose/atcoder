#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<vector<int>> S(M);
    for(int i=0;i<M;i++){
        int k;cin>>k;
        S[i].resize(k);
        for(int j=0;j<k;j++){
            int s;cin>>s;
            s--;
            S[i][j]=s;
        }
    }
    vector<int> P(M);
    for(int i=0;i<M;i++)cin>>P[i];
    int ans=0;
    for(int bit=0;bit<(1<<N);bit++){
        int ok=0;
        for(int i=0;i<M;i++){
            int cnt=0;
            for(int j=0;j<(int)S[i].size();j++)if(bit&(1<<S[i][j]))cnt++;
            if(cnt%2==P[i])ok++;
        }
        if(ok==M)ans++;
    }
    cout<<ans<<endl;
    return 0;
}

