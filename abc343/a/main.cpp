#include<bits/stdc++.h>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    int target = A + B;
    for (int i = 0; i < 10; i++) {
        if (i != target) {
            cout << i << endl;
            break;
        } 
    }

    return 0;
}

