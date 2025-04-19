#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    int current = 0;
    rep(i, n) {
        int s;
        cin >> s;
        cout << s - current;
        current = s;
        if(i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}

