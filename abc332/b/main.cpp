#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int k, g, m;
    int x = 0, y = 0, z;
    cin >> k >> g >> m;
    rep(i, k) {
        if (x == g) x = 0;
        else if (y == 0) y = m;
        else {
            z = min(g - x, y);
            x += z, y -= z;
        }
    }
    cout << x << " " << y << endl;
    
    return 0;
}

