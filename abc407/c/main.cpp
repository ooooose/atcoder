#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int op = 0;
    int current = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
        int target = s[i] - '0';

        int diff = (target - current + 10) % 10;
        op += diff;

        op++;

        current = target;
    }

    cout << op << endl;
    return 0;
}
