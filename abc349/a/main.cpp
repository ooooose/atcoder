#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int  i =0; i < N - 1; i++) {
       int A;
       cin >> A;
       sum += A;
    }

    cout << -1 * sum << endl;
}

