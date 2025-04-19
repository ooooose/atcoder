#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    deque<int> a;

    bool flag = false;
    rep(i, n) {
        int op, b;
        cin >> op;
        if (op == 1) cin >> b;
        else b = 0;
        if (op == 1) {
            a.push_back(b);
        } else if (op == 2) {
            flag = true;
            cout << a.front() << endl;
            a.pop_front();
        }
    }
    if (!flag) cout << endl;
    return 0;
}

