#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

void dfs(int v, vector<bool>& visited, vector<set<int>>& edge) {
    visited[v] = true;
    for (int u : edge[v]) {
        if (!visited[u]) {
            dfs(u, visited, edge);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> edge(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        edge[a].insert(b);
        edge[b].insert(a);
    }
    rep(i, n) {
        if (edge[i].size() != 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    vector<bool> visited(n, false);
    dfs(0, visited, edge);

    rep(i, n) {
        if (!visited[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

