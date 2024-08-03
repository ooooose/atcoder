#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, n) cin >> vec.at(i);
    vector<int> dup = vec;
    sort(dup.begin(), dup.end());
    int sec = dup[n - 2];

    rep(i, n) {
        if (vec[i] == sec) cout << i + 1 << endl;
    }
    return 0;
}

