#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<long long> x;
    int idx = 0;
    x.push_back(0);
    bool has_q_3 = false;
    rep(i, n) {
        int q;
        cin >> q;
        if (q == 1) {
            long long a;
            cin >> a;
            x.push_back(x.back() + a);
        } else if (q == 2) {
            idx++;
        } else if (q == 3) {
            has_q_3 = true;
            int k;
            cin >> k;
            k--;
            cout << x[idx + k] - x[idx] << "\n";
        }
    }
    if (!has_q_3) cout << "\n";
    return 0;
}

