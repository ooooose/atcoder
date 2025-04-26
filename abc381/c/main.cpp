#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    rep(i, n) {
        if (s[i] == '/') {
            int count = 0;
            for(int j = 1; j <= i; j++) {
                if (s[i - j] == '1' && s[i + j] == '2') {
                    count++;
                }
                else break;
            }
            ans = max(ans, count);
        }
    }
    cout << ans * 2 + 1 << endl;
    return 0;
}

