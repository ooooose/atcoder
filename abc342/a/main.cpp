#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++) {
        bool diff = true;
        for (int j = 0; j < n; j++) {
            if (i != j and s.at(i) == s.at(j)) diff = false;
        } 
        if (diff == true) cout << i + 1 << endl;
    }
}

