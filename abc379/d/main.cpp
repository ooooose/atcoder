#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long q;
    cin >> q;
    queue<long long> bot;
    long long offset = 0;
    rep(i,q) {
        int query;
        cin >> query;
        if (query == 1) {
            bot.push(-offset);
        }
        else if (query == 2) {
            long long t;
            cin >> t;
            offset += t;
        }
        else if (query == 3) {
            long long h;
            cin >> h;
            long long count = 0;
            while(!bot.empty() && bot.front() + offset >= h) {
                count++;
                bot.pop();
            }
            cout << count << endl;
        }
    }
    return 0;
}

