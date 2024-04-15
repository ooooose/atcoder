#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int point = 0;
    int sz = s.size();

    for (int i = 0; i < sz; i++) {
        if (s.at(i) == 'A') point++;
        else break;
    }
    for (int i = point; i < sz; i++) {
        if (s.at(i) == 'B') point++;
        else break;
    }
    for (int i = point; i < sz; i++) {
        if (s.at(i) == 'C') point++;
        else break;
    }
    if (point == sz) cout << "Yes" << endl;
    else cout << "No" << endl;
}

