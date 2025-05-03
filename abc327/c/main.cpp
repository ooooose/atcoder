#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<vector<int>> graphs(9, vector<int>(9));
    rep(i, 9) rep(j, 9) cin >> graphs[i][j];
    rep(i, 9) {
        set<int> row;
        set<int> col;
        rep(j, 9) {
            row.insert(graphs[i][j]);
            col.insert(graphs[j][i]);
            int square_x = i / 3;
            int square_y = j / 3;
        }
        if (row.size() != 9 || col.size() != 9) {
            cout << "No" << endl;
            return 0;
        }
    }
    rep(i, 3) {
        rep(j, 3) {
            set<int> square;
            rep(k, 3) {
                rep(l, 3) {
                    square.insert(graphs[i * 3 + k][j * 3 + l]);
                }
            }
            if (square.size() != 9) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}

