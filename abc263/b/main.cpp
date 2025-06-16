#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> A(N);
    for(int i=1;i<N;i++){
        cin>>A[i];
        A[i]--;
    }
    vector<int> dp(N);
    for(int i=1;i<N;i++){
        dp[i]=dp[A[i]]+1;
    }
    cout<<dp[N-1]<<endl;
    
    return 0;
}

