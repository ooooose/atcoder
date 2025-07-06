#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll X,K;cin>>X>>K;

    for(int i=0;i<K;i++)
    {
        ll power=1;
        for(int j=0;j<=i;j++)power*=10;
        
        ll digit=(X/(power/10))%10;
        
        if(digit>=5)X=(X/power+1)*power;
        else X=(X/power)*power;
    }
    cout<<X<<endl;
    return 0;
}

