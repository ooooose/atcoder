#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N;
    cin >> N;
    vector<pair<double, int>> C(N); 

    rep(i, N) {
        int a, b;
        cin >> a >> b;
        double success = (double) a / (a + b);
        C[i] = {success, i+1};
    }
    sort(C.begin(), C.end(), [](const pair<double, int>& x, const pair<double, int>& y) {
        if (x.first != y.first) return x.first > y.first;
        return x.second < y.second;
    });

    rep(i, N) cout << C[i].second << " ";
    cout << endl;
    
    return 0;
}

