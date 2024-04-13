#include<bits/stdc++.h>
using namespace std;
int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;
  int ans;

  if (op == "+") {
    ans = A + B;
  }
  else if (op == "-") {
    ans = A - B;
  }

  cout << ans << endl;
}

