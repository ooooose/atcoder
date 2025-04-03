#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    rep (i, 13) {
        int card = i + 1;
        set<int> t = {a, b, c, d};
        if (t.size() == 1) {
            cout << "No" << endl;
            return 0;
        }
        set<int> s = {a, b, c, d, card};
        if (s.size() == 2) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

