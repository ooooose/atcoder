#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    long long ma = -INT_MAX;
    long long mb = -INT_MAX;
    cin >> n;
    rep(i, n) {
        long long a;
        cin >> a;
        ma = max(ma, a);
    }
    rep(i, n) {
        long long b;
        cin >> b;
        mb = max(mb, b);
    }
    cout << ma + mb << endl;
    return 0;
}

