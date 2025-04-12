#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000000
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, k;
    cin >> n >> k;

    if (k > n) {
        cout << 1 << endl;
        return 0;
    }
    vector<long long> a(n + 1, 0);
    rep(i, k) a[i] = 1;

    long long current_sum = k;
    for (int i = k; i <= n; i++) {
        a[i] = current_sum % MOD;
        current_sum = (current_sum + a[i] - a[i - k] + MOD) % MOD;
    }

    cout << a[n] << endl;
    return 0;
}

