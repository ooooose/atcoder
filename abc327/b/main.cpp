#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long b;
    cin >> b;
    for (int a = 1; a <= 15; a++) {
        long long x = 1;
        rep(i, a) x *= a;
        if (x == b) {
            cout << a << endl;
            return 0;
        }
    }
    
    cout << "-1" << endl;
    return 0;
}

