#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
#define MOD 998244353
#define inv2 499122177

long long triangular(long long x)
{
    x%=MOD;
    long long res=x;

    res*=(x+1);res%=MOD;
    res*=inv2;res%=MOD;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;cin>>N;

    long long res=0;
    long long p10=10;
    for(int i=1;i<=18;i++)
    {
        long long l=p10/10;
        long long r=min(N,p10-1);
        if(l<=r)
        {
            res+=triangular(r-l+1);
            res%=MOD;
        }
        p10*=10;
    }
    cout<<res<<endl;
    return 0;
}

