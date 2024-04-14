#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, d;
    cin >> a >> b >> d;

    int size = (b - a) / d + 1;

    for (int i = 0; i < size; i++) {
        cout << a + d * i;
        if (i != size - 1) cout << ' ';
    }
    cout << endl;
}

