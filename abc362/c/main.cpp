#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int n;
    cin >> n;
    vector<pair<long long, long long>> lr(n);
    map<int, int> mp;
    vector<int> x(n);
    long long sum = 0;
    long long rsum = 0;
    rep(i, n) {
        int l, r;
        cin >> l >> r;
        sum += l;
        rsum += r;
        mp[i] = l;
        lr[i] = {l, r};
    };
    if (sum > 0 || rsum < 0) {
        cout << "No" << endl;
        return 0;
    }
    rep(i, n) {
        if (sum == 0) break;
        int diff = min(lr[i].second - lr[i].first, -sum);
        sum += diff;
        mp[i]+= diff;
    }
    if (sum == 0) {
        cout << "Yes" << endl;
        rep(i, n) {
            cout << mp[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

