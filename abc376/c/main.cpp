#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n-1);
    rep(i, n) cin >> a[i];
    rep(i, n-1) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    rep(i, n-1) {
        if (a[i] > b[i]) {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int i = n-2; i >= 0; i--) {
        if (a[i+1] > b[i]) {
            cout << a[i+1] << endl;
            return 0;
        }
    }
    cout << a[0] << endl;
    return 0;
}

