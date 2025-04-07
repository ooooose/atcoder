#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string a_b;
    string a_c;
    string b_c;
    cin >> a_b >> a_c >> b_c;
    if (a_b != a_c) {
        cout << "A" << endl;
    } else if (a_b == b_c) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    }
    return 0;
}

