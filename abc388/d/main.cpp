#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;cin>>N;
    vector<int> A(N+1);
    for (int i=1;i<=N;i++)cin>>A[i];
    
    vector<ll> diff(N+2,0),r(N+1,0),d(N+1,0),B(N+1,0);
    for (int i=1;i<=N;i++)
    {
        if(i==1)r[i]=diff[i];
        else r[i]=r[i-1]+diff[i];
 
        d[i]=min((ll)N-i,(ll)A[i]+r[i]);
 
        if(d[i]>0)
        {
            diff[i+1]++;
            diff[i+d[i]+1]--;
        }
 
        B[i]=A[i]+r[i]-d[i];
    }
    
    for (int i=1;i<=N;i++)cout<<B[i]<<(i==N?"\n":" ");
    return 0;
}
