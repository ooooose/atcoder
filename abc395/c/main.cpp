#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, vector<int>> b;
    rep(i, n) cin >> a[i];
    rep(i, n) {
        b[a[i]].push_back(i);
    }
    int ans = INT_MAX;
    for(auto& [key, indices] : b) {
        if (indices.size() > 1) {
            rep (i, indices.size() - 1) {
                int distance = indices[i + 1] - indices[i];
                ans = min(ans, distance);
            }
        }
    }
    if (ans == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << ans + 1 << endl;
    }
    return 0;
}

