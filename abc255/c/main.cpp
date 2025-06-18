#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long X,A,D,N;
    cin>>X>>A>>D>>N;
    if(D<0){
        long long fi=A+D*(N-1);
        A=fi;
        D*=-1;
    }

    long long st=0,fi=(N-1);
    while(st<fi){
        long long te=(st+fi)/2;
        if((A+D*te)<X)st=te+1;
        else fi=te-1;
    }
    long long res=8e18;
    for(long long i=max(0ll,st-5);i<=min((N-1),st+5);i++)res=min(res,abs(A+D*i-X));
    cout<<res<<endl;

    return 0;
}

