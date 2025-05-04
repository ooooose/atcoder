#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> q(n);
  vector<int> a(n);
  vector<int> b(n);
  int max_q;
  rep(i,n) cin >> q[i];
  max_q = *max_element(q.begin(), q.end());
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  ll ans = 0;

  ll INF = pow(10, 18);
  for(ll x = 0; x <= max_q; x++) {
    ll y = INF;
    rep(i,n) {
      if (q[i] < a[i]*x) y = -INF;
      else if (b[i] > 0) y = min(y, (q[i] - a[i]*x) / b[i]);
    }
    ans = max(ans, x + y);
  }

  cout << ans << endl;
  return 0;
}

