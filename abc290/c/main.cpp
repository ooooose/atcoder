#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N, K;
    cin >> N >> K;
    set<int> A;
    rep(i, N) {
        int a;
        cin >> a;
        A.insert(a);
    }

    rep(i, K) {
        if(A.find(i) == A.end()) {
            cout << i << endl;
            return 0;
        }
    }
    cout << K << endl;
    return 0;
}

