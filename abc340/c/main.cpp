#include<bits/stdc++.h>
using namespace std;
using ll = long long;

map<ll, ll> m;
ll f(ll n) {
  if (n == 1) return 0;
  if(m.count(n)) return m[n];
  return m[n] = f(n/2) + f((n+1)/2) + n;
}
int main() {
  ll n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}

