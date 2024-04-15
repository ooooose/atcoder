#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string ans;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s.at(i) == '.') break;
        ans += s.at(i);
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

