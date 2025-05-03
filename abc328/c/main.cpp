#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> b(n);
    b.push_back(0);
    rep(i, n - 1) {
        if (s[i] == s[i + 1]) b[i+1] = 1;
    }
    vector<int> c(n);
    c.push_back(0);
    rep(i, n) c[i+1] = b[i] + c[i];
    rep(i, q) {
        int l, r;
        cin >> l >> r;
        cout << c[r] - c[l] << endl;
    }
    return 0;
}

