#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long b;
    cin >> b;
    rep(a, 15) {
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

