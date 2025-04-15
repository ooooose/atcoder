#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> b;
    rep(i, n) cin >> a[i];
    rep(i, n) {
        if (b[a[i]] == 1) {
            cout << i + 1 << endl;
            return 0;
        }
        b[a[i]]++;
    }
    cout << -1 << endl;
    return 0;
}

