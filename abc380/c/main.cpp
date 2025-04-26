#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<pair<char, int>> rle;
    for(char c : s) {
        if (rle.size() && rle.back().first == c) rle.back().second++;
        else rle.emplace_back(c, 1);
    }

    int one = 0;
    rep(i, rle.size()) {
        if (rle[i].first == '1') {
            one++;
            if (one == k) {
                swap(rle[i], rle[i-1]);
            }
        }
    }
    string ans;
    for(auto [c, l] : rle) {
        rep(i, l) ans += c;
    } 
    cout << ans << endl;
    return 0;
}

