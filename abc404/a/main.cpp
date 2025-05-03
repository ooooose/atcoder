#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    string s;
    cin >> s;
    set<char> st;
    rep(i, s.size()) {
        st.insert(s[i]);
    }
    vector<char> sorted_st(st.begin(), st.end());
    sort(sorted_st.begin(), sorted_st.end());
    vector<char> t;
    rep(i, 26) t.push_back('a' + i);
    rep(i, t.size()) {
        if (sorted_st[i] != t[i]) {
            cout << t[i] << endl;
            return 0;
        }
    }
    return 0;
}

