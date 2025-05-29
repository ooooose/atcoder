#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

// Aにを昇順ソートしてBjより大きいAの値を抽出、AiとAi-1を調査してより差分が小さい値を出力すればよい。
// lower_bounceを使って対応すればよい。

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());

    cin >> q;
    rep(i,q) {
        int b;
        cin >> b;
        auto it = lower_bound(a.begin(), a.end(), b);

        int diff = INT_MAX;
        if (it != a.end()) diff = min(diff, abs(*it - b));
        if (it != a.begin()) diff = min(diff, abs(*(it-1) - b));
        cout << diff << endl;
    }
    return 0;
}

