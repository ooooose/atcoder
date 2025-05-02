#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (auto& x : A) cin >> x;
    for (auto& x : B) cin >> x;
    auto C = A;
    for (auto x : B) C.push_back(x);
    sort(C.begin(), C.end());
    for (int i = 0; i < N + M - 1; ++i) {
        if (find(A.begin(), A.end(), C[i]) != A.end() && find(A.begin(), A.end(), C[i+1]) != A.end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}

