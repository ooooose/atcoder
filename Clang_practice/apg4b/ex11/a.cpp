#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  for (int i = 0; i < N; i++) {
    string op;
    int num;
    cin >> op >> num;
    
    if (op == "+") {
      A += num;
    }
    else if (op == "-")
    {
      A -= num;
    }
    else if (op == "*")
    {
      A *= num;
    }
    else if (op == "/" && num != 0)
    {
      A /= num;
    }
    else
    {
      cout << "error" << endl;
      break;
    }
    cout << i+1 << ":" << A << endl;
  }

}
