#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    string s;
    string t;
    int count = 0;
    cin >> s >> t;
    rep(i, n) {
        if (s.at(i) != t.at(i)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

