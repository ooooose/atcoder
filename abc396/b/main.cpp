#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    stack<int> st;
    rep (i, 100) st.push(0);

    int Q;
    cin >> Q;
    rep(i, Q) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            st.push(x);
        } else if (t == 2) {
            cout << st.top() << endl;
            st.pop();
        }
    }
}

