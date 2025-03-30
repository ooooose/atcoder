#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    int count = 0;
    rep(i, n - 1) {
        if (a.at(i) == a.at(i + 1)) {
            count++;
        } else {
            count = 0;
        }
        if (count >= 2) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    
    return 0;
}

