#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int H, W;    
    cin >> H >> W;
    vector<string> G(H);

    rep(i, H) cin >> G[i];

    // 範囲を求める際に勉強になった
    int U=1e9, D=-1e9, L=1e9, R=-1e9;
    rep(i, H) rep(j, W) {
        if(G[i][j] == '#') {
            U = min(U, i), D = max(D, i);
            L = min(L, j), R = max(R, j);
        } 
    }

    for(int i = U; i <= D; i++) for(int j = L; j <= R; j++) if(G[i][j] == '.') {

        cout << i+1 << " " << j+1 << endl;
        return 0;
    }
    return 0;
}

