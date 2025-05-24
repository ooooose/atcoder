#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 1; i <= n;  i++) {
        for (int j = 1; j <= n; j++) {
            int z = k - i - j;
            if (z>=1 && z <= n) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

