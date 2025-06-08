#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N,Q;
    cin>>N>>Q;
    dsu D(N);
    rep(i,Q){
        int q,u,v;
        cin>>q>>u>>v;
        u--; v--;
        if(q==1){
            D.merge(u,v);
        }
        else if(q==2){
            if(D.same(u,v)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    
    return 0;
}

