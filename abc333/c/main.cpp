#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    for(int d = 1; d <= 12; d++) {
        for(int a = d - 1; a >= 0; a--) {
            for(int b = d - a - 1; b >= 0; b--) {
                int c = d - a - b;
                if(--n == 0) {
                    cout << string(a, '1') + string(b, '2') + string(c, '3') << endl;
                    return 0;
                }
            }
        }   
    }
}

