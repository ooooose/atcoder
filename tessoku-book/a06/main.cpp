#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
// g++ -std=c++23 main.cpp

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<ll> sum_a(n+1);
    rep(i, n) cin >> a[i];
    sum_a[0] = a[0];
    for(int i = 1; i <= n; i++) sum_a[i] = sum_a[i-1] + a[i];
    rep(i, q) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << sum_a[r] - sum_a[l-1] << endl;
    }
    return 0;
}

