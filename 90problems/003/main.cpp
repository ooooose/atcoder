#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using Graph = vector<vector<int>>;

// 木構造として捉えて閉路を持つ時の辺の数の最大数を求める。
// 閉路の長さとは、頂点u, vに辺を結ぶことでできる閉路の長さは「パスu-vの長さ+1」になる。
// つまり言い換えると「グラフの２頂点間の距離の最大値」となり、このことをグラフの直径というらしい。
// 直径を求めるためには、まず適当な頂点からDFSを行い、最も遠い頂点を求める。
// その頂点から再度DFSを行い、最も遠い頂点までの距離が直径となる。

vector<int> dfs(const Graph &G, int s) {
    int n = G.size();
    vector<int> dist(n, -1);
    dist[s] = 0;

    stack<int> st({s});
    while(!st.empty()) {
        int v = st.top();
        st.pop();
        for (int u : G[v]) {
            if (dist[u] == -1) {
                st.push(u);
                dist[u] = dist[v] + 1;
            }
        }
    }
    return dist;
}

int main() {
    int n;
    cin >> n;

    Graph G(n);
    rep(i, n-1) {
        int a, b;
        cin >> a >> b; a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    auto dist0 = dfs(G, 0); // 0からの距離を求める  

    int mx = -1, mv = -1;
    for (int v =0; v < n; v++) {
        if (dist0[v] > mx) {
            mx = dist0[v];
            mv = v;
        }
    }   

    auto dist1 = dfs(G, mv); // mvからの距離を求める

    mx = -1;
    for (int v = 0; v < n; v++) {
        if (dist1[v] > mx) {
            mx = max(dist1[v], mx);
        }
    }

    cout << mx + 1 << endl; // 直径は最長距離+1

    return 0;
}

