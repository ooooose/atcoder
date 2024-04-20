#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    int x = m, y = 0;
    int ans = 0;
    rep(i, s.size()) {
        if (s.at(i) == '1') {
            if (x > 0) x--;
            else y++; 
        }
        else if (s.at(i) == '2') {
            y++;
        }
        else if (s.at(i) == '0') {
            y = 0;
            x = m;
        }
        ans = max(ans, y);
    }
    cout << ans << endl;
    
    return 0;
}

