#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    vector<pair<char, ll>> v;
    rep(i, n-1) {
        if (p[i] < p[i+1]) {
            if(v.empty() || v.back().first == '>') v.push_back({'<', 1});
            else v.back().second++;
        }
        else {
            if (v.empty() || v.back().first == '<') v.push_back({'>', 1});
            else v.back().second++;
        }
    }
    int sz = size(v);
    ll ans = 0;
    for(int i = 1; i <sz - 1; i++) if (v[i].first == '>') ans += v[i-1].second * v[i+1].second;
    cout << ans << endl;
    return 0;
}
