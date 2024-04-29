#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

vector<int> move_y = {0, 0, -1, 1};
vector<int> move_x = {-1, 1, 0, 0};
int main() {
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int ans = 0;

    rep(i, h) {
        rep(j, w) {
            bool flag = true;
            if (s[i][j] == '.') {
                int flag = 1;
                int ni = i;
                int nj = j;
                for (auto c : t) {
                    int d;
                    if (c == 'L') d = 0; 
                    else if (c == 'R') d = 1; 
                    else if (c == 'U') d = 2; 
                    else if (c == 'D') d = 3; 
                    ni += move_y[d];
                    nj += move_x[d];
                    if(s[ni][nj] == '#') {
                        flag = false;
                        break;
                    }
                }
                if (flag == true) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

