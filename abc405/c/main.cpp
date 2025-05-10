#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll sum = accumulate(a.begin(), a.end(), 0LL);
    ll result = 0;

    rep(i, n) {
        sum -= a[i];
        result += a[i] * sum;
    }
    cout << result << endl;
    return 0;
}

