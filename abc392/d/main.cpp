#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // サイコロの出目と確率を管理
    vector<map<int, double>> dice(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            dice[i][a] += 1.0 / k;
        }
    }

    double max_prob = 0.0;

    // 2つのサイコロを選ぶ
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double prob = 0.0;
            for (const auto& [x, p1] : dice[i]) {
                if (dice[j].count(x)) {
                    prob += p1 * dice[j][x];
                }
            }
            max_prob = max(max_prob, prob);
        }
    }

    cout << fixed << setprecision(15) << max_prob << endl;
    return 0;
}

