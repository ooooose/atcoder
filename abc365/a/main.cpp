#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int y;
    cin >> y;
    if (y % 4 != 0) cout << 365 << endl;
    else if (y % 4 == 0 && y % 100 != 0) cout << 366 << endl;
    else if (y % 100 == 0 && y % 400 != 0) cout << 365 << endl;
    else if (y % 400 == 0) cout << 366 << endl;
    
    return 0;
}

