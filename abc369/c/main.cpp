#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> diffs(n-1);
    rep(i,n-1) diffs[i] = a[i+1] - a[i];
    int ans = 2*n-1;
    int cnt = 0;
    rep(i,n-1) {
        if (diffs[i] == diffs[i+1]) cnt++;
        else {
            if (cnt >= 1) ans += (cnt+1)*cnt/2;
            cnt = 0;
        }
    }

    if (cnt > 0) ans += (cnt+1)*cnt/2;
    cout << ans << endl;
    return 0;
}

