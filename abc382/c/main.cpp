#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    int min_a = *min_element(a.begin(), a.end());
    rep(i, m) {
        rep(j, n) {
            if (b[i] < min_a) {
                cout << -1 << endl;
                break;
            }
            if (a[j] <= b[i]) {
                cout << j + 1 << endl;
                break;
            }
        }
    }
    return 0;
}

