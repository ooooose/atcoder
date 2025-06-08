#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par,rank;
    int components;
    UnionFind(int n) : par(n),rank(n, 0),components(n) {
        for (int i=0;i<n;i++) {
            par[i]=i;
        }
    }
    int find(int x) {
        if (par[x]==x)return x;
        return par[x]=find(par[x]);
    }
    bool unite(int x, int y) {
        int rx = find(x),ry = find(y);
        if (rx == ry)return false;
        if (rank[rx]<rank[ry]) {
            par[rx]=ry;
        } else {
            par[ry]=rx;
            if (rank[rx] == rank[ry]) rank[rx]++;
        }
        components--;
        return true;
    }
};
 
int main(){
    int N, M;
    cin >> N >> M;
    UnionFind uf(N);
    for (int i = 0; i < M; i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        uf.unite(u, v);
    }
    int ans=M-(N-uf.components);
    cout<<ans<<endl;
 
    return 0;
}

