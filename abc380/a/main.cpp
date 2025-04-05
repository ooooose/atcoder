#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string n;
    cin >> n;
    int ones = 0;
    int twos = 0;
    int threes = 0;

    rep (i, n.length()) {
        if (n[i] == '1') {
            ones++;
        } else if (n[i] == '2') {
            twos++;
        } else if (n[i] == '3') {
            threes++;
        }
    }
    if (ones == 1 && twos == 2 && threes == 3) {
        cout << "Yes" << endl;
        return 0;
    } else {
        cout << "No" << endl;
        return 0;
    }
    return 0;
}

