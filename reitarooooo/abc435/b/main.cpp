#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    
    int ans=0;
    for(int r=0;r<N;r++)
    {
        for(int l=0;l<r;l++)
        {
            int sum=0;
            for(int i=l;i<=r;i++)sum+=A[i];
            bool ok=true;
            for(int i=l;i<=r;i++)if(sum%A[i]==0)ok=false;
            if(ok)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

