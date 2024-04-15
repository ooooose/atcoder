#include<bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    bool ans = isupper(S[0]);

    for (int i = 1; i < S.size(); ++i) {
        ans &= bool(islower(S[i]));
    }
    cout << (ans ? "Yes" : "No") << endl;
}

