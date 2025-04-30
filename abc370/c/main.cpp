#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    int size = s.size();
    vector<int> idx(size, 0);
    queue<string> q;
    rep(i, size) {
        if(s[i] > t[i]) idx[i] = -1;
        else if(s[i] < t[i]) idx[i] = 1;
    }
    rep (i, 2) {
        rep(j, size) {
            if (i == 0 && idx[j] == -1) {
                if (idx[j] == 0) continue;
                s[j] = t[j];
                q.push(s);
            }
            if (i == 1) {
                int id = size - j - 1;
                if (idx[id] == 0) continue;
                if (idx[id] == 1) {
                    s[id] = t[id];
                    q.push(s);
                }
            }
        }
    }
    cout << q.size() << endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}

