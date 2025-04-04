#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

void No() {
    cout << "No" << endl;
    exit(0);
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n % 2 == 0) No();

    for (int i = 0; i < (n + 1 ) / 2 - 1; i++) {
        if (s[i] != '1') No();
    }
    if (s[(n + 1) / 2 - 1] != '/') No();

    for (int i = (n + 1) / 2; i < n; i++) {
        if (s[i] != '2') No();
    }
    cout << "Yes" << endl;
    return 0;
}

