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
        
        sort(A.begin(),A.end(),[](ll a,ll b){
            return abs(a)<abs(b);
        });

        if(N==2)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        bool ok=true;
        for(int i=2;i<N;i++)
        {
            if(A[i-1]*A[i-1]!=A[i-2]*A[i])
            {
                ok=false;
                break;
            }
        }
        cout<<(ok?"Yes":"No")<<endl;

    }
    return 0;
}

