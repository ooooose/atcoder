#include <bits/stdc++.h>
using namespace std;

int solve(const string &s) {
    int n = s.size();
    vector<int> pos;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') pos.push_back(i);
    }

    int total_ones = pos.size();
    if (total_ones <= 1) return 0;

    int min_ops = INT_MAX;
    int left = 0;

    for (int right = 0; right < total_ones; ++right) {
        while (left <= right) {
            int ones_inside = right - left + 1;
            int l = pos[left];
            int r = pos[right];
            int zeros_inside = (r - l + 1) - ones_inside;
            int ones_outside = total_ones - ones_inside;
            int cost = zeros_inside + ones_outside;

            min_ops = min(min_ops, cost);

            if (left < right && zeros_inside > ones_outside)
                ++left;
            else
                break;
        }
    }

    return min_ops;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    vector<string> results;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        results.push_back(to_string(solve(S)));
    }

    for (auto &res : results) {
        cout << res << "\n";
    }

    return 0;
}
