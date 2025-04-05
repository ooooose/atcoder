#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    int m;
    cin >> n >> m;
    long long limit = 1000000000;
    long long ans = 1;
    rep (i, m) {
        long long target = 1;
        rep (j, i + 1) target *= n;
        ans += target;
        if (ans > limit) {
            cout << "inf" << endl;
            return 0;
        }
    }
    if (ans <= limit) {
        cout << ans << endl;
    } 
    return 0;
}

