#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N, S;
    cin >> N >> S;

    vector<int> A(N);
    rep(i, N) cin >> A[i];

    if (A[0] > S) {
        cout << "No" << endl;
        return 0;
    }

    for(int i = 1; i < N; i++) {
        if (A[i] - A[i-1] > S) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

