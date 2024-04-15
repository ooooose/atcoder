#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int takahashi = 0;
    int aoki = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        takahashi += x;
        aoki += y;
    }


    if (takahashi > aoki) {
        cout << "Takahashi" << endl;
    }
    else if (takahashi == aoki){ 
        cout << "Draw" << endl;
    }
    else if (takahashi < aoki) {
        cout << "Aoki" << endl;
    }
}

