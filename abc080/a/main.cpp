#include<bits/stdc++.h>
using namespace std;
int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int planA = N * A;
  if (planA <= B) {
    cout << planA << endl;
  } else {
    cout << B << endl;
  }

}

