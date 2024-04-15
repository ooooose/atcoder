#include<bits/stdc++.h>
using namespace std;

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> ans(h, vector<char>(w, '.'));

    int x = 0; int y = 0; int m = 0; 

    for (int _ = 0; _ < n; _++) {
        if (ans[x][y] == '.') {
            ans[x][y] = '#';
            m++;
        }
        else {
            ans[x][y] = '.';
            m += 3;
        }

        m %= 4;

        x += dx[m]; y += dy[m];

        if (x < 0) x += h; if (x >= h) x -= h;
        if (y < 0) y += w; if (y >= w) y -= w;
    } 
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << ans[i][j];
        }
        cout << '\n';
    }
}

