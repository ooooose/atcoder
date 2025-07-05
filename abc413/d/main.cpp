#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q;cin>>Q;
    while(Q--)
    {
        int N;cin>>N; 
        vector<ll> A(N);
        for(int i=0;i<N;i++)cin>>A[i];
        
        sort(A.begin(),A.end());
        
        bool ok=true;
        bool abs_ok=true;
        
        for(int i=1;i<N-1;i++) 
        {
            if((ll)A[i]*A[i]!=(ll)A[i-1]*A[i+1])
            {
                ok=false;
                break;
            }
        }
        
        if(!ok)
        {
            sort(A.begin(),A.end(),[](ll a,ll b){
                return abs(a)<abs(b);
            });
            
            for(int i=1;i<N-1;i++)
            {
                if((ll)A[i]*A[i]!=(ll)A[i-1]*A[i+1])
                {
                    abs_ok=false;
                    break;
                }
            }
        }
        
        cout<<((ok||abs_ok)?"Yes":"No")<<endl;
    }
    return 0;
}

