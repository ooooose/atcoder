#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<int> a(7);
    rep(i, 7) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> b;
    int count = 0;
    rep(i, a.size() - 1) {
        if (a[i] == a[i + 1]) {
            count++;
        } else {
            b.push_back(count);
            count = 0;
        }
        if (i == a.size() - 2) {
            b.push_back(count);
        };
    }
    if (find(b.begin(), b.end(), 2) != b.end() && find(b.begin(), b.end(), 1) != b.end()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

