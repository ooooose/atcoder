#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    vector<int> x(n);
    rep(i, n) {
        cin >> w.at(i) >> x.at(i);
    }
    int ans = 0;
    rep(i, n) {
        int count = 0;
        int min_hour = x[i];
        int max_hour = min_hour + 9;
        rep (j, n) {
            if (min_hour <= x[j] && x[j] < max_hour) count += w[j];
        }
        ans = max(count, ans);
    }

    
    cout << ans << endl;
    return 0;
}

