#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long x;
    cin >> x;
    for (int i = 2; i <= 20; ++i) {
        long long f = 1;
        for (int j = 1; j <= i; ++j) {
            f *= j;
        }
        if (f == x) {
            cout << i << endl;
        }
    }
}

