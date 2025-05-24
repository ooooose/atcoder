#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
// g++ -std=c++23 main.cpp

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> sum_a(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum_a[i] = sum_a[i-1] + a[i];
    }
    rep(i, q) {
        int l, r;
        cin >> l >> r;
        cout << sum_a[r] - sum_a[l-1] << endl;
    }
    return 0;
}

