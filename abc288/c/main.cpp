#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
 
int main(){
    int N, M;
    cin >> N >> M;
    dsu D(N);
    int ans=0;
    for (int i = 0; i < M; i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        if(D.same(u,v))ans++;
        D.merge(u,v);
    }

    cout<<ans<<endl;
    return 0;
}

