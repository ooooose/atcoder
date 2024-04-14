#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
    for (int i = 0; i < n; i++) {
        vector<int> v;
        for (int j = 0; j < n; j++) if (a[i][j]) v.push_back(j + 1);

        int sz = v.size();
        for (int j = 0; j < sz; j++) {
            cout << v[j];
            if (j != sz - 1) cout << ' ';
        }
        cout << '\n';
    }
}

