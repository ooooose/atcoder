#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int M, D, y, m, d;
    cin >> M >> D;
    cin >> y >> m >> d;

    int ans_y = y, ans_m = m, ans_d = d + 1;

    if (ans_d > D) { 
        ans_m++; 
        ans_d = 1;
    }
    if (ans_m > M) { 
        ans_y++; 
        ans_m = 1;
    }
    cout << ans_y << " " << ans_m << " " << ans_d << endl;
    
    return 0;
}

