#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int c1 = count(s.begin(), s.end(), '1');
    int c0 = n - c1;

    vector<int> d;
    int ones_count = 0;

    for (char c : s) {
        if (c == '0') {
            d.push_back(ones_count);
        } else {
            ones_count++;
        }
    }

    long long min_moves = 0;
    for (int di : d) {
        min_moves += min(di, c1 - di);
    }

    cout << min_moves << endl;
    return 0;
}

