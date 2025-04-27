#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    string t;
    cin >> t;
    string u;
    cin >> u;
    for (int i = 0; i <= t.size() - u.size(); i++) {
        int count = 0;
        for(int j = i; j < i + u.size(); j++) {
            if (t[j] == u[j - i] || t[j] == '?') {
                count++;
            }
        }
        if (count == u.size()) {
            cout << "Yes" << endl;
            return 0;
        }
        count = 0;
    }
    cout << "No" << endl;
    return 0;
}

