#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    int l = 0;
    int r = 0;
    int x = 0;
    rep (i, n) {
        int y;
        char s;
        cin >> y >> s;
        if (s == 'L') {
            if (l != 0) {
                x += abs(y - l);
            }
            l = y;
        } else if (s == 'R') {
            if (r != 0) {
                x += abs(y -r);
            }
            r = y;
        }
    }
    cout << x << endl;
    return 0;
}

