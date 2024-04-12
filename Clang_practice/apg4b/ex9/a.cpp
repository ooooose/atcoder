#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  int y = x * (a + b);
  cout << y << endl;
  int z = y * y;
  cout << z << endl;
  z--;
  cout << z << endl;
}

