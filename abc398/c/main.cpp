#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, vector<int>> m;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]].push_back(i);
    }

    ll max_value = -1;
    int result_index = -1;
    for (auto& [key, indices] : m) {
        if (indices.size() == 1) {
            if (key > max_value) {
                max_value = key;
                result_index = indices[0] + 1;
            }
        }
    }

    if (result_index != -1) {
        cout << result_index << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}

