#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> divisors_table(int upper){
    vector<vector<int>> res(upper+1);
    for(int i=1;i<=upper;i++){
        for(int j=i;j<=upper;j+=i)res[j].push_back(i);
    }
    return res;
}

int main(){
    ll N;cin>>N;
    ll M=1;
    while(M*M<=N)M++;
    M--;
    auto table=divisors_table(M);
    int ans=0;
    for (int i=1;i<=M;i++)
    {
        if(table[i].size()==5) ans++;
        if(table[i].size()==4&&table[i][2]%table[i][1])ans++;
    }
    cout<<ans<<"\n";
}
