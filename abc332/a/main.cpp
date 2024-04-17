#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, s, k;
    cin >> n >> s >> k;
    int ans = 0;
    rep(i, n) {
        int p, q;
        cin >> p >> q;
        ans += p * q;
    }
    if(ans < s) ans += k;
    cout << ans << endl;
    
    return 0;
}

