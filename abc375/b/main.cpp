#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    double x, sum = 0;
    cin >> n;
    vector<double> a(n);
    vector<double> b(n);
    rep (i, n) cin >> a[i] >> b[i];

    sum = sqrt((0 - a[0]) * (0 - a[0]) + (0 - b[0]) * (0 - b[0]));
    rep(i, n) {
        x = (a[i] - a[i + 1]) * (a[i] - a[i + 1]) + (b[i] - b[i + 1]) * (b[i] - b[i + 1]);
        sum += sqrt(x);
    }

    cout << fixed << setprecision(8);
    cout << sum << endl;
}