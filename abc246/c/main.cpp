#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,K,X;cin>>N>>K>>X;
    vector<long long> A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    
    sort(A.rbegin(),A.rend());
    
    for(int i=0;i<N&&K>0;i++) 
    {
        long long cnt=A[i]/X;
        long long use=min((long long)K,cnt);
        A[i]-=use*X;
        K-=use;
    }
    
    sort(A.rbegin(),A.rend());
    for(int i=0;i<N&&K>0;i++) 
    {
        if(A[i]>0)
        {
            A[i]=0;
            K--;
        }
    }
    
    long long sum=0;
    for(int i=0;i<N;i++)sum+=A[i];
    cout<<sum<<"\n";
    return 0;
}
