#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K,X;cin>>N>>K>>X;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    sort(A.rbegin(),A.rend());
    for(int i=0;i<N;i++)
    {
        if(A[i]<X)continue;
        int a=A[i];
        int mai=(K-a/X>=0)?a/X:K;
        K-=mai;
        A[i]-=X*mai;
        if(K==0)break;
    }
    sort(A.rbegin(),A.rend());
    for(int i=0;i<N;i++)
    {
        K--;
        A[i]=0;
        if(K==0)break;
    }
    int sum=0;
    for(int i=0;i<N;i++)sum+=A[i];
    cout<<sum<<endl;
    return 0;
}

