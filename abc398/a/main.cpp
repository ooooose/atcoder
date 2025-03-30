#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int q;
    cin >> q;
    int falf = q / 2;
    if (q % 2 == 0) {
        int c = (q - 2)/2;
        cout << string(c, '-') + "==" + string(c, '-') << endl;
    } else {
        int c = (q - 1)/2;
        cout << string(c, '-') + "=" + string(c, '-') << endl;
    }
    return 0;
}

