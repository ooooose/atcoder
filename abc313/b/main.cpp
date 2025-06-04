#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
    int N, M;
    cin>>N>>M;

    vector<int> S(N,0);

    rep(i,M) {
        int a,b;
        cin>>a>>b;
        a--; b--;
        S[b]++;
    }

    int cnt = 0;
    int target = 0;
    rep(i,N){
        if (S[i] == 0) {
            cnt++;
            target = i;
        }
    }

    if (cnt == 1) cout << target+1 << endl;
    else cout << -1 << endl;

    return 0;
}

