#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int countDiffs(vector<string>& grid1, vector<string>& grid2, int n) {
    int count = 0;
    rep(i, n) rep(j, n) if (grid1[i][j] != grid2[i][j]) count++;
    return count;
}

vector<string> rotate(vector<string>& grid, int n) {
    vector<string> newGrid(n, string(n, ' '));
    rep(i, n) rep(j, n) newGrid[j][n - 1 - i] = grid[i][j];
    return newGrid;
}

int main() {
    int n;
    cin >> n;

    vector<string> grid1(n), grid2(n);
    rep(i, n) cin >> grid1[i];
    rep(i, n) cin >> grid2[i];

    int minOps = INT_MAX;
    vector<string> currentGrid = grid1;

    rep(i, 4) {
        int diff = countDiffs(currentGrid, grid2, n);
        minOps = min(minOps, diff + i);
        currentGrid = rotate(currentGrid, n);
    }

    cout << minOps << endl;
    return 0;
}

