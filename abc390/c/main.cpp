#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    int li = h, ri  = 0;
    int lj = w, rj = 0;

    rep(i,h) rep(j, w) if (s[i][j] == '#') {
        li = min(li, i); ri = max(ri, i);
        lj = min(lj, j); rj = max(rj, j);
    }

    for(int i = li; i <= ri; i++) {
        for (int j = lj; j <= rj; j++) {
            if (s[i][j] == '.') {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}

