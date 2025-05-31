#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

// setに格納すれば重複要素が排除され、昇順にソートされる
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    set<int> C;
    rep(i, N) C.insert(A[i]);

    cout << C.size() << endl;
    for(int c : C) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}

