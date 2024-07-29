#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, T, P;
    cin >> N >> T >> P;
    vector<int> vec(N);
    rep(i, N) cin >> vec.at(i);
    sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b;
    });
    int ans;
    if (T > vec[P - 1]) {
        ans = T - vec[P - 1];
    }
    else ans = 0;
    cout << ans << endl;
    
    return 0;
}

