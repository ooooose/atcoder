#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s; 
    bool yes = false;
    for (int i = 0; i < n - 1;  i++) {
        if (s[i] == 'a' and s[i + 1] == 'b') yes = true;
        if (s[i] == 'b' and s[i + 1] == 'a') yes = true;
    }
    cout << (yes ? "Yes" : "No") << endl;

    return 0;
}

