#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> A(N),B(N),C(N);
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<N;i++)cin>>B[i];
    for(int i=0;i<N;i++)cin>>C[i];
    sort(A.begin(),A.end());
    sort(C.begin(),C.end());
    long long ans=0;
    for(int i=0;i<N;i++)
    {
        int a_count=lower_bound(A.begin(),A.end(),B[i])-A.begin();
        int c_count=C.end()-upper_bound(C.begin(),C.end(),B[i]);
        ans+=a_count*c_count;
    }
    cout<<ans<<endl;
    return 0;
}

