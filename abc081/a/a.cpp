#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans;
  if (s[0] == '1') ans++;
  if (s[1] == '1') ans++;
  if (s[2] == '1') ans++;

  cout << ans << endl;
}