#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long n;
    cin >> n;

    string t; 

    while (n != 0) {
        t += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    int ans = 0;
    reverse(t.begin(), t.end());
    for (int i = t.size() - 1; i >= 0; i--) {
        if (t.at(i) != '0') break;
        ans++;
    }
    cout << ans << endl;
    return 0;
}

