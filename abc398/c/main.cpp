#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i, n) cin >> s[i];
    unordered_map<int, int> m;
    
    rep(i, n) {
        m[s[i]]++;
    }
    
    for (int i = n; i >= 0; i--) {
        if (m[s[i]] == 1) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;

}

