#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> a[i];

    int ans = -1;
    for (int i = 0; i <= 100; i++) {
        vector<int> b = a;
        b.push_back(i);
        sort(b.begin(), b.end());

        int sum = 0;
        for (int j = 1; j < n - 1; j++) {
            sum += b[j];
        }

        if (sum >= x) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

