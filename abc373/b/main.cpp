#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string keyboard = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    cin >> s;
    int ans = 0;
    rep (i, keyboard.size() - 1) {
        int index = s.find(keyboard[i]);
        int nextIndex = s.find(keyboard[i + 1]);
        ans += abs(index - nextIndex);
    }
    cout << ans << endl;
    return 0;
}
