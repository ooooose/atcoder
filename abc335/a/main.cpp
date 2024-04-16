#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    int pointer = s.size()-1;
    s.erase(pointer);
    s += '4';
    
    cout << s << endl;
    return 0;
}

