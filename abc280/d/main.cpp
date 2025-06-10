#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long K;
    cin>>K;
    long long A,N,X,ans=1;

    for(long long p=2;(p*p)<=K;p++){
        A=0;
        while(K%p==0)K/=p,ans++;
        N=0;
        while(A>0){
            N+=p;
            X=N;
            while(X%p==0)X/=p,A--;
        }
    }
    ans=max(ans,K);
    cout<<ans<<endl;
    return 0;
}

