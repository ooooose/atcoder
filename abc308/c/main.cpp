#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N;
    cin >> N;

    vector<long long> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];

    auto cmp = [&](int i, int j) -> bool {
        return A[i] * (A[j] + B[j]) > A[j] *(A[i] + B[i]);  
    };


    vector<int> ids(N);

    for(int i = 0; i < N; ++i) ids[i] = i;

    stable_sort(ids.begin(), ids.end(), cmp);

    for(auto id : ids) cout << id + 1 << " ";
    cout << endl;
    return 0;
}

