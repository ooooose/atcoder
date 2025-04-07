#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> flags(n, false);

    rep(i, m) {
        int a;
        char b;
        cin >> a >> b;
        if (b == 'M' and flags[a - 1] == false) {
            flags[a - 1] = true;
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}

