#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    map<int, int> a;
    rep(i,n) {
        int x;
        cin >> x;
        if (a.contains(x)) {
            cout << a[x] << " ";
        } else {
            cout << -1 << " ";
        }
        a[x] = i + 1;
    }
    cout << endl;
    return 0;
}

