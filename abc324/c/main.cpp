#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool is_one_change(const string& t, const string& s) {
    int diff_count = 0;
    rep(i, t.size()) {
        if (t[i] != s[i]) diff_count++;
        if (diff_count > 1) return false;
    }
    return diff_count <= 1;
}

bool is_one_insert(const string& t, const string& s) {
    int i = 0, j = 0;
    while (i < t.size() && j < s.size()) {
        if (t[i] != s[j]) {
            if (i != j) return false;
            i++;
        } else {
            i++;
            j++;
        }
    }
    return true;
}

bool is_one_delete(const string& t, const string& s) {
    return is_one_insert(s, t);
}

int main() {
    int n;
    string t;
    cin >> n >> t;
    vector<int> ans;

    rep(i, n) {
        string s;
        cin >> s;

        if (t.size() == s.size() && is_one_change(t, s)) {
            ans.push_back(i + 1);
        } else if (t.size() == s.size() + 1 && is_one_insert(t, s)) {
            ans.push_back(i + 1);
        } else if (t.size() + 1 == s.size() && is_one_delete(t, s)) {
            ans.push_back(i + 1);
        }
    }

    cout << ans.size() << endl;
    for (int idx : ans) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}

