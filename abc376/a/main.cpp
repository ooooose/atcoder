#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, c;
    cin >> n >> c;
    int count = 0;
    int before = 0;
    rep (i, n) {
        int t;
        cin >> t;
        if (i == 0) {
            count++; 
            before = t;

        } else if (t - before >= c) {
            count++;
            before = t;
        }
    }
    cout << count << endl;
    return 0;
}

