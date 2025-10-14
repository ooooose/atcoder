#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--)
    {
        int N,M;cin>>N>>M;
        vector<int> A(N),B(N);
        for(int i=0;i<N;i++) cin>>A[i];
        for(int i=0;i<N;i++) cin>>B[i];

        sort(A.rbegin(),A.rend());
        sort(B.begin(),B.end());

        long long ans=0;

        for(int i=0;i<N;i++)ans+=A[i]+B[i];

        int idx=0;
        for(int i=0;i<N;i++)
        {
            while(idx<N&&B[idx]+A[i]<M) idx++;
            if(idx==N)break;
            ans-=M;
            idx++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}

