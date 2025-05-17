#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    ll limit = 1;
    rep(i, k) limit *= 10;
    
    ll current = 1;
    rep(i, n) {
        ll a;
        cin >> a;
        current *= a;
        
        if (current >= limit) {
            current = 1;
        }
    }

    cout << current << endl;
    return 0;
}
