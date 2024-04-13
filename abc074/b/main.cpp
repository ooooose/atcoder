#include<bits/stdc++.h>
using namespace std;
int main() {
  int N, K;
  cin >> N >> K;
  int judge = K / 2;
  int ans = 0;

  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    if (x <= judge)
    {
      ans += x * 2;
    }
    else
    {
      ans += (K - x) * 2;
    }
  }

  cout << ans << endl;
}
