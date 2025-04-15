#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int n, cur = 0;
    n = s.size();
    while(cur <(n - 1)) {
        if (s[cur] == 'W' && s[cur + 1] == 'A') {
            s[cur] = 'A';
            s[cur + 1] = 'C';
            if (cur > 0) {
                cur--;
            }
        }
        else cur++;
    }
    cout << s << endl;
    return 0;
}

