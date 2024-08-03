#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int total = 0;
    int target = 0;
    rep(i, n) { 
        cin >> a.at(i);
        total += a.at(i);
        target = max(a.at(i), target);
    }
    if (total <= m) {
        cout << "infinite" << endl;
        return 0;
    }
    for (int i = 1; i < target; i++) {
        int count = 0;
        rep(j, n) count += min(a[j], i);
        if (count > m) { 
            cout << i - 1 << endl;
            return 0;
        }
    }
}

