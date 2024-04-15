#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    int a[128] = {};

    for (char c: s) {
        a[c]++;
    }

    char ans = 'a';
    for (char c = 'b'; c <= 'z'; ++c) {
        if (a[c] > a[ans]) ans = c;
    } 
    cout << ans << endl;
}

