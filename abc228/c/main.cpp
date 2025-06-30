#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;cin>>N>>K;
    vector<int> P(N),Q(N);
    for(int i=0;i<N;i++)
    {
        int a,b,c;cin>>a>>b>>c;
        P[i]=a+b+c;
        Q[i]=a+b+c;
    }
    sort(Q.rbegin(),Q.rend());
    int border=Q[K-1]-300;
    for(int i=0;i<N;i++)
    {
        if(P[i]>=border) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

