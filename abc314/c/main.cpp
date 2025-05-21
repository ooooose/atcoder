#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    int c[200000];
    vector<int> p[200001];
    cin >> s;
    rep(i,n) cin >> c[i];
    rep(i,n) p[c[i]].push_back(i);

    string t(n, '?');
    for (int i = 1; i <= m; i++) {
        int k = p[i].size();
        rep(j, k) t[p[i][(j+1)%k]] =s[p[i][j]];
    }

    cout << t << endl;
    return 0;
}

