#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
    rep(i, N) rep(j, N) cin >> A[i][j];

    vector<vector<char>> ans(N, vector<char>(N));

    rep(i, N) rep(j, N) {
        int d = min({ i + 1, j + 1, N - i, N - j });
        int ni = i, nj = j;
        rep(i, d % 4) {
            int ti =nj, tj = N - 1 - ni;
            ni = ti, nj = tj;
        }
        ans[ni][nj] = A[i][j];
    }  

    rep(i, N) {
        rep(j, N) cout << ans[i][j];
        cout << endl;
    }

    return 0;
}

