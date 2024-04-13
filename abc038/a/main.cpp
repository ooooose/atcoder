#include<bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;

    int index = S.size() - 1;
    if (S.at(index)=='T') {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

