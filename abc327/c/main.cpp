#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<vector<int>> graphs(9, vector<int>(9));
    rep(i, 9) rep(j, 9) cin >> graphs[i][j];
    set<int> row;
    set<int> col;
    set<int> square;
    rep(i, 9) {
        rep(j, 9) {
            row.insert(graphs[i][j]);
            col.insert(graphs[j][i]);
            int square_x = i / 3;
            int square_y = j / 3;
            int square_index = square_x * 3 + square_y;
            square.insert(graphs[square_index][j]);
        }
        if (row.size() != 9 || col.size() != 9 || square.size() != 9) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

