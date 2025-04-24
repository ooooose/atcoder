#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    int id = 0;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    long ans = 0;
    rep(i, n) {
        if (i == 0) continue;
        int target = a[i] / 2;
        for (int j = id; j < n; j++) {
            if (a[j] > target) {
                id = j;
                break;
            }
        }
        ans += id;
    }
    cout << ans << endl;
    return 0;
}

