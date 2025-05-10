#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 1; i <= m; i++) mp[i] = 0;
    rep(i,n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (const auto& [key, value] : mp) {
        if (value == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    int ans = 0;
    while (true){
        int x = a.back();
        mp[x]--;
        a.pop_back();
        ans++;
        if (mp[x] == 0) {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

