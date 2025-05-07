#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> diffs(n-1);
    rep(i,n-1) diffs[i] = a[i+1] - a[i];
    int ans = 0;
    rep(i, n-1) {
        int count = 1;
        int sum = 0;
        for (int j = i; j < n-1; j++) {
            sum += diffs[j];
            if (sum > m-1) break;
            count++;
        }
        ans = max(ans, count);
    }
    cout << ans << endl;
    return 0;
}

