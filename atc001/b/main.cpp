#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    dsu uf(N);
    while(Q--)
    {
        int p,a,b;cin>>p>>a>>b;
        if(p==0) uf.merge(a,b);
        else if(p==1) cout<<(uf.same(a,b)?"Yes":"No")<<endl;
    }
    
    return 0;
}

