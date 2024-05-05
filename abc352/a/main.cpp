#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    if (x < z && z < y) cout << "Yes\n";
    else if (y < z && z < x) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}

