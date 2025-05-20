#include <bits/stdc++.h>
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using T = tuple<int, int, int>;

int main() {
    vector<int> cells(9);
    for (int i = 0; i < 9; i++) cin >> cells[i];

    // 縦・横・斜めの列を表す
    vector<T> row = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // 横の列
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // 縦の列
        {0, 4, 8}, {2, 4, 6} // 斜めの列
    };

    // i個目野ますが何回目に開かれるかの順番を表す
    vector<int> order(9);
    iota(order.begin(), order.end(), 0);

    int not_disappointed = 0, all = 0;

    do {
        ++all;
        bool disappointed = false;

        for (auto &&[a, b, c] : row) {
            // マスaとマスbが同じで、マスcがそれより後ろにある場合
            if (cells[a] == cells[b] && order[a] < order[c] && order[b] < order[c]) {
                disappointed = true;
                break;
            }
            // 同じ数字のペアが残り2通り野場合も同様
            if (cells[a] == cells[c] && order[a] < order[b] && order[c] < order[b]) {
                disappointed = true;
                break;
            }
            if (cells[b] == cells[c] && order[b] < order[a] && order[c] < order[a]) {
                disappointed = true;
                break;
            }
        }

        if (!disappointed) ++not_disappointed;

        // next_permutationを使って全ての開け方を試す
    } while (next_permutation(order.begin(), order.end()));

    // 小数点以下10桁分出力するように設定
    cout << fixed << setprecision(10);
    // がっかりしない知り方の個数を総数で割って出力
    // 少数として計算する必要があるため、double型にキャスト
    cout << (double)not_disappointed / all << endl;

    return 0;
}

