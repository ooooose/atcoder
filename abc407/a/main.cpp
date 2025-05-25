#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int a, b;
    cin >> a >> b;
    double x = (double)a / b;
    int upper = a / b + 1;
    int lower = a / b;
    if (x - lower < 0.5) {
        cout << lower << endl;
    } else {
        cout << upper << endl;
    }
    return 0;
}

