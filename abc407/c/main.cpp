#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    int current = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
        int target = s[i] - '0';

        // ボタンBの操作回数を計算
        // 繰り上がりを考慮して、10を足した上で10の剰余を取る。
        int diff = (target - current + 10) % 10;
        // 余りの数だけボタンBを押す必要がある。
        ans += diff;

        // ボタンAの操作回数を計算（桁の追加）
        ans++;

        // 現在の桁を更新
        current = target;
    }

    cout << ans << endl;
    return 0;
}
