#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

struct Edge {
    int to;
    ll cost;
};

// DFSを用いて同じ街を２度と通らずに通る道の総和の最大値を求める。
// まず、DFSを用いて各街の隣接リストを作成する。
// その後、DFSを用いて各街の隣接リストをたどり、通った街の数をカウントする。
// その後、通った街の数が最大値を更新する。
int ans = 0;

void dfs(int v, const vector<vector<Edge>>& G, vector<bool>& visited, ll cost, ll &max_cost) {
    visited[v] = true;
    max_cost = max(max_cost, cost);
    for (const auto& edge : G[v]) {
        if (!visited[edge.to]) {
            dfs(edge.to, G, visited, cost + edge.cost, max_cost);
        }
    }
    visited[v] = false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<Edge>> G(n);
    rep(i, m) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        // 1-indexedから0-indexedに変換
        a--; b--;
        G[a].push_back({b, c});
        G[b].push_back({a, c});
    }
    ll max_cost = 0;

    // 各街を起点にDFSを行い、通った街の数をカウントする。
    // その後、通った街の数が最大値を更新する。
    // ただし、同じ街を２度と通らないようにするため、visited配列を用意する。
    rep(i, n) {
        vector<bool> visited(n, false);
        dfs(i, G, visited, 0, max_cost);
    }

    cout << max_cost << endl;
    return 0;
}

