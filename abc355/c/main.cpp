#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> row(n, 0);
    vector<int> col(n, 0);
    int right = 0;
    int left = 0;

    rep(i, t) {
      int a;
      cin >> a;
      a--;
      int x = a / n;
      int y = a % n;
      row[x] += 1;
      if (row[x] == n) {cout << i + 1 << endl; return 0;}

      col[y] += 1;
      if (col[y] == n) {cout << i + 1 << endl; return 0;}

      if (x == y) {
        right += 1;
        if (right == n) {cout << i + 1 << endl; return 0;}
      }

      if (x + y == n - 1) {
        left += 1;
        if (left == n) {cout << i + 1 << endl; return 0;}
      }
    }
    cout << -1 << endl;
    return 0;
}

