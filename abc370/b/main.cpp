#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);

    rep(i, n) {
        vector<int> b(i + 1);
        rep(j, n) {
            if (i < j) break;
            cin >> b[j];
        };
        a[i] = b;
    }
    int current = 1;
    int next = 1;
    rep(i, n) {
        if (next >= current) {
            next = a[next - 1][current - 1];
        } else {
            next = a[current - 1][next - 1];
        }
        current++;
    }
    cout << next << endl;
    return 0;
}

