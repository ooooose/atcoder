#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

long long N,K;
int A[100009];

bool check(int m){
    long long sum=0;
    rep(i,N) sum+=m/A[i];
    return sum>=K;
}

int main() {
    cin>>N>>K;
    rep(i,N)cin>>A[i];

    long long l=0,r=1000000000;
    while(l<r){
        long long mid=(l+r)/2;
        if(check(mid)) r=mid;
        else l=mid+1;
    }
    cout << l << endl;
    
    return 0;
}

