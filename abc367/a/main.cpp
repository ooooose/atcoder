#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int a, b , c;
    cin >> a >> b >> c;
    if (b < c)
    {
        if (b < a && a < c)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    else
    {
        if (c < a && a < b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

