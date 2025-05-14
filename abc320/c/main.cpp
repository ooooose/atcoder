#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int m;
    int n = 3;
    cin >> m;
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    int ans = INT_MAX;
    rep(i, n*m) {
        rep(j, n*m) {
            rep(k, n*m) {
                if (i != j && j !=k && i != k && s1[i%m] == s2[j%m] && s2[j%m] == s3[k%m]) {
                    ans = min(ans, max({i, j, k}));
                }
            }
        }
    }
    if (ans < INT_MAX) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}

