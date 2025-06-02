#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N;
    cin >> N;
    map<int, int> A;

    rep(i, N*3) {
        int a;
        cin >> a;
        A[a]++;
        if (A[a] == 2) cout << a << " ";
    }
    cout << endl;
    
    return 0;
}

