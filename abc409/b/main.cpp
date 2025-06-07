#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N;
    cin>>N;
    vector<int> A(N);
    rep(i,N)cin>>A[i];
    int ans=0;
    rep(i,N+1){
        int cnt=0;
        rep(j,N)if(A[j]>=i)cnt++;
        if(cnt>=i)ans=max(ans,i);
    }
    cout<<ans<<endl;
    return 0;
}

