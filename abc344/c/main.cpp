#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<int> n(3);
    vector<vector<int>> a(3);

    rep(j, 3) {
        cin >> n[j];
        a[j] = vector<int>(n[j]);
        rep(i, n[j]) cin >> a[j][i];
    }

    set<int> st;
    rep(i, n[0])rep(j, n[1]) rep(k, n[2]) {
        int s = a[0][i] + a[1][j] + a[2][k];
        st.insert(s);
    }

    int q;
    cin >> q;
    rep(qi, q) {
        int x;
        cin >> x;
        if (st.count(x)) cout << "Yes\n";
        else cout << "No\n";
    }
    cout << endl;
    return 0;
}

