#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int a, b;
    a = s.at(0) - '0';
    b = s.at(2) - '0';
    cout << a * b << endl;
    return 0;
}

