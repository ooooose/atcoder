#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;

    stack<char> st;

    map<char, char> pairs = {
        {'(', ')'},
        {'[', ']'},
        {'<', '>'}
    };

    for (char c : s) {
        if (c =='(' || c == '[' || c == '<') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '>') {
            if (st.empty() || pairs[st.top()] != c) {
                cout << "No" << endl;
                return 0;
            }
            st.pop();
        }
    }

    cout << (st.empty() ? "Yes" : "No") << endl;
    return 0;
}

