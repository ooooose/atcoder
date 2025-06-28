#include <bits/stdc++.h>
using namespace std;
using ll=long long;

vector<pair<int,int>> f(int M)
{
    vector<pair<int,int>> res(M+1,{1,0});
    for(int i=2;i<=M;i++)
    {
        for(int j=i;j<=M;j+=i)
        {
            res[j].first++;
            if(res[j].second==0)res[j].second=i;
        }
    }
    return res;
}

int main(){
    ll N;cin>>N;
    ll M=1;
    while (M*M<=N)M++;
    M--;
    auto table=f(M);
    int ans=0;
    for (int i=1;i<=M;i++)
    {
        if (table[i].first==5)ans++;
        if(table[i].first==4&&(ll)table[i].second*table[i].second*table[i].second!=i)ans++;
    }
    cout<<ans<<"\n";
}
