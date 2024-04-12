#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int a_b = a * b;
  if (a_b % 2 == 1) {
    cout << "Odd" << endl;
  } else {
    cout << "Even" << endl;
  }
}