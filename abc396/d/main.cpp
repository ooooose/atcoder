#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using Graph = vector<vector<pair<int, ll>>>;


// グラフの構築、各辺にはラベルがついているため隣接リストにラベルも含めて管理
// DFSを用いて探索する。頂点1からスタートしてDFSを用いて頂点（N）に達する全ての単純パスを探索する。
// その際、訪問済みフラグを用いて、同じ頂点を訪問しないようにする。
// 全ての単純パスを探索した後に最小のXOR値を出力

int n, m;
Graph G;
ll min_ans = LLONG_MAX;
vector<bool> visited;

void dfs(int node , ll current_ans) {
    // 頂点Nに到達した場合はmin_ansを更新
    if (node == n - 1) {
        min_ans = min(min_ans, current_ans);
        return;
    }
    visited[node] = true;
    for (auto [next_node, label] : G[node]) {
        if (!visited[next_node]) {
            dfs(next_node, current_ans ^ label);
        }
    }
    // バックトラックして訪問済みフラグを戻す
    visited[node] = false;
}

int main() {
    cin >> n >> m;
    G.resize(n);
    visited.resize(n, false);

    rep(i, m) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        // 0-indexedに変換
        a--; b--;
        G[a].emplace_back(b, c);
        G[b].emplace_back(a, c);
    }
    // 頂点1からDFSを開始
    dfs(0, 0);
    
    cout << min_ans << endl;
    return 0;
}

