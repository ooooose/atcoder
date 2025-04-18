#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    bool flag = true;
    int ans = 0;
    while(flag) {
        sort(a.rbegin(), a.rend());
        if (a[1] == 0) {
            flag = false;
            break;
        }
        a[0]--;
        a[1]--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}

