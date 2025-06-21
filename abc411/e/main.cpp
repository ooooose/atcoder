#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
const ll MOD=998244353;
 
ll modpow(ll a,ll b,ll mod=MOD)
{
    ll res=1%mod;
    a%=mod;
    while(b)
    {
        if(b&1)res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}

ll modinv(ll a,ll mod=MOD) 
{
    return modpow(a,mod-2,mod);
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<vector<int>> X(7,vector<int>(N));
    
    for(int i=0;i<N;i++)
    {
        vector<int> f(6);
        for (int j=0;j<6;j++)cin>>f[j];
        sort(f.begin(),f.end());
        for (int j=0;j<6;j++)X[j+1][i]=f[j];
    }
    for(int j=1;j<=6;j++)sort(X[j].begin(),X[j].end());
    
    vector<int> D;
    for (int j=1;j<=6;j++)for(int i=0;i<N;i++)D.push_back(X[j][i]);
    sort(D.begin(),D.end());
    D.erase(unique(D.begin(),D.end()),D.end());
    
    ll inv6=modinv(6);
    ll inv6N=modpow(inv6, N);
    
    auto F=[&](int m)->ll
    {
        int a1=(int)(upper_bound(X[1].begin(),X[1].end(),m)-X[1].begin());
        int cnt0=N-a1;
        if(cnt0>0)return 0LL;
        int cntj[7]={0};
        for (int j=1;j<=5;j++)
        {
            int aj=(int)(upper_bound(X[j].begin(),X[j].end(),m)-X[j].begin());
            int aj_next=(int)(upper_bound(X[j+1].begin(),X[j+1].end(),m)-X[j+1].begin());
            cntj[j]=aj-aj_next;
        }
        int a6=(int)(upper_bound(X[6].begin(),X[6].end(),m)-X[6].begin());
        cntj[6]=a6;
        ll p=1;
        for (int j=1;j<=6;j++)p=(p*modpow(j,cntj[j]))%MOD;
        return(p*inv6N)%MOD;
    };
    ll result=0;
    ll prevF=0;
    for (int m:D)
    {
        ll curF=F(m);
        ll diff=(curF-prevF+MOD)%MOD;
        result=(result+((ll)m%MOD)*diff)%MOD;
        prevF=curF;
    }
    
    cout<<result%MOD<<endl;
    return 0;
}

