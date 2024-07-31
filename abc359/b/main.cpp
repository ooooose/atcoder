#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> vec(n * 2);
    for (auto &v : vec) cin >> v;
    int ans = 0;
    for (int i = 0; i < n * 2 - 2; i++) {
        if (vec[i] == vec[i + 2]) ans++;
    }

    cout << ans << endl;
    return 0;
}

