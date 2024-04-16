#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    int x = 0;
    int y = 0;
    int z = 0;

    while (x < n) {
        cout << x << ' ' << y << ' ' << z << endl;
        z++;
        if (z == n - y - x + 1) {
            z = 0;
            y += 1;
        }
        if (y == n - x - z + 1) {
            y = 0;
            x += 1;
        }
        if (x == n) break;
    }
    cout << x << ' ' << y << ' ' << z << endl;

    return 0;
}

