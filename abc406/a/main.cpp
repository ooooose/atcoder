#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int a, b ,c, d;
    cin >> a >> b >> c >> d;
    if (a > c) cout << "Yes" << endl;
    else if (a == c) {
        if (b >= d) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else cout << "No" << endl;
    return 0;
}

