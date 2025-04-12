#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    bool authorized = false;
    int count = 0;
    rep(i, n) {
        string s;
        cin >> s;
        if (s == "login") {
            authorized = true;
        } else if (s == "logout") {
            authorized = false;
        } else if (s == "private") {
            if (!authorized) count++;
        }
    }
    cout << count << endl;
    return 0;
}

