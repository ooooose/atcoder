#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
    rep(i, N) rep(j, N) cin >> A[i][j];

    vector<vector<char>> B = A;

    for (int i = 0; i < N / 2; i++) {
        for (int x = i; x < N - i; x++) for (int y = i; y < N - i; y++) B[y][N - 1 - x] = A[x][y];
        A = B;
    }

    rep(i, N) {
        rep(j, N) cout << A[i][j];
        cout << endl;
    }

    return 0;
}

