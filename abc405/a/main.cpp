#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int r, x;
    cin >> r >> x;
    if (x == 1) {
        if (1600 <= r && r <= 2999) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else if (x == 2) {
        if (1200 <= r && r <= 2399 ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

