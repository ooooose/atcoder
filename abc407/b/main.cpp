#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            if (i + j >= x || abs(i - j) >= y) cnt++;
        }
    }
    cout << fixed << setprecision(15) << double(cnt) / 36.0 << endl;
    return 0;
}

