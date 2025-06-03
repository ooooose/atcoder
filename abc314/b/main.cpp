#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, X, C[101];
    vector<int> A[101];

    cin >> N;

    for(int i = 1; i <= N; i++) {
        cin >> C[i];
        A[i].resize(C[i]);

        for(int  j=0; j < C[i]; j++) cin >> A[i][j];
    }

    cin >> X;

    vector<int> vec;

    for(int i =1; i <=N; i++) {
        for(int j=0; j<C[i]; j++) if(A[i][j] == X) vec.push_back(i);
    }

    int cmin = 37;
    for(auto i : vec) cmin = min(cmin, C[i]);

    vector<int> ans;

    for(auto i : vec) if(C[i] == cmin) ans.push_back(i);

    cout << ans.size() << endl;
    for(auto a : ans) cout << a << " ";
    cout << endl;
    return 0;
}

