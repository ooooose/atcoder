#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

vector<vector<int>> to;
vector<int> ans;

void dfs(int v, int p=-1) {
    ans.push_back(v);
    for (int u : to[v]) {
        if (u == p) continue;
        dfs(u, v);
        ans.push_back(v);
    }

}


int main() {
    int n;
    cin >> n;
    to.resize(n);
    rep(i, n-1) {
        int a,b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    rep(i,n) sort(to[i].begin(), to[i].end());
    dfs(0);
    for (int v : ans) cout << v + 1 << " ";
    cout << endl;
    return 0;
}

