#include <bits/stdc++.h>
using namespace std;

void generate(vector<string> &grid, int size, int x, int y) {
    if (size == 1) {
        grid[x][y] = '#';
        return;
    }

    int blockSize = size / 3; // レベル (N-1) のカーペットのサイズ

    // 3x3 のブロックを配置
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                // 中央のブロックは白いマス
                for (int dx = 0; dx < blockSize; dx++) {
                    for (int dy = 0; dy < blockSize; dy++) {
                        grid[x + i * blockSize + dx][y + j * blockSize + dy] = '.';
                    }
                }
            } else {
                // 他のブロックはレベル (N-1) のカーペット
                generate(grid, blockSize, x + i * blockSize, y + j * blockSize);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    int size = pow(3, N); // レベル N のカーペットのサイズ
    vector<string> grid(size, string(size, '.')); // 初期化（すべて白いマス）

    // レベル N のカーペットを生成
    generate(grid, size, 0, 0);

    // 結果を出力
    for (const string &row : grid) {
        cout << row << endl;
    }

    return 0;
}

