#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N, K;

int main() {
    cin >> N >> K;
    vector<int> A(N);
    rep(i,N)cin>>A[i];

    long long ans=0;
    for(int i=0; i < N; i++) {
        auto it=upper_bound(A.begin(),A.end(),A[i]+K);
        int j=it-A.begin();
        ans+=j-(i+1);
    }
    cout << ans << endl;
    return 0;
}

