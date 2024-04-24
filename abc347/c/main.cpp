#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int w = A + B;
    vector<int> d(N);
    rep(i, N) {
        cin >> d[i];
        d[i] %= w;
    }
    sort(d.begin(), d.end());
    rep(i, N) d.push_back(d[i] + w);
    rep(i, N) {
        int l = d[i], r = d[i + N - 1];
        if (r - l + 1 <= A) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}

