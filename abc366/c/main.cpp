#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    unordered_map<int, int> mp;
    int n;
    cin >> n;
    rep(i, n) {
        int q;
        cin >> q;
        if(q == 1) {
            int a;
            cin >> a;
            mp[a]++;
        } else if (q == 2) {
            int a;
            cin >> a;
            if (mp[a] > 0) {
                mp[a]--;
                if (mp[a] == 0) mp.erase(a);
            }
        } else if (q == 3) {
            cout << mp.size() << endl;
        }
    }
    return 0;
}

