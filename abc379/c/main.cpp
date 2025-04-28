#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long n;
    int m;
    cin >> n >> m;
    vector<pair<int, long long>> xa(m);
    rep(i,m) cin >> xa[i].first;
    rep(i,m) cin >> xa[i].second;
    sort(xa.begin(), xa.end());
    long long sum = 0, sum_idx = 0;
    rep(i, m) {
        if( sum < xa[i].first -1) {
            cout << -1 << endl;
            return 0;
        }
        sum += xa[i].second;
        sum_idx += xa[i].second * xa[i].first;
    }
    if(sum != n) {
        cout << -1 << endl;
        return 0;
    }

    cout << n * (n + 1) / 2 - sum_idx << endl;
    return 0;
}

