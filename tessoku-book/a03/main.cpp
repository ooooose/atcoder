#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    vector<int> q(n);
    rep(i,n) {
        cin >> p[i];
        cin >> q[i];
    }
    rep(i,n) {
        rep(j,n) {
            int sum = p[i] + q[j];
            if (sum == k) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

