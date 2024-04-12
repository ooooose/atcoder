#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string color;
  int flag = 0;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> color;
    if (color == "Y")
    {
      flag = 1;
    }
  }
  if (flag == 1)
  {
    cout << "Four" << endl;
  }
  else
  {
    cout << "Three" << endl;
  }
}