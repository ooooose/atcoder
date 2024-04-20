#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        --a, --b;  // 0-indexed にする
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int ans = 0;
    
    for (int v = 0; v < N; ++v) {
        set<int> S;
        
        // 頂点 v に隣接する頂点に隣接する頂点を見ていく
        for (auto i : G[v]) for (auto j : G[i]) S.insert(j);
        
        // 頂点 v 自身と、頂点 v に直接隣接する頂点は除く
        S.erase(v);
        for (auto i : G[v]) S.erase(i);
        
        ans += S.size();
    }
    cout << ans << endl;
}

