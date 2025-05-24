#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<bool> visited(n + 1, false); // 訪問済みフラグ
    vector<int> s; // 通った頂点を記録する配列

    int current = 1; // 現在の頂点
    while (!visited[current]) {
        visited[current] = true; // 現在の頂点を訪問済みにする
        s.push_back(current); // 現在の頂点を記録する
        current = a[current]; // 次の頂点に移動する
    }

    // 閉路の開始点を見つける
    vector<int> cycle;
    auto it = find(s.begin(), s.end(), current);
    while (it != s.end()) {
        cycle.push_back(*it);
        it++;
    }

    cout << cycle.size() << endl;
    for (int i = 0; i< cycle.size(); i++) {
        if (i) cout << " ";
        cout << cycle[i];
    }
    cout << endl;
    return 0;
}

