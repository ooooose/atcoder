#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int a;
    cin >> a;
    int square = 400;
    if (square % a == 0) {
        cout << square / a << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}

