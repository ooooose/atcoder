#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    int flag = 0;
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        if (flag >= 2) {
            cout << "No" << endl;
            return 0;
        }
        if (S == "sweet") flag++; 
        else flag = 0;
    }
    cout << "Yes" << endl;
    return 0;
}

