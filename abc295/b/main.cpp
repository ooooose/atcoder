#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

using P = pair<int, int>;

int main() {
    int R, C;
    cin>>R>>C;
    vector<string> G(R);
    rep(i, R) cin>>G[i];

    queue<P> q;

    rep(i, R) rep(j, C) {
        if (G[i][j] != '.' && G[i][j] !='#') q.push({i,j});
    }

    while(!q.empty()) {
        auto [x,y]=q.front();
        q.pop();

        int dist = G[x][y]-'0';
        G[x][y]='.';

        for(int k=0; k<R; k++) {
            for (int d=0; d<C; d++) {
                if (abs(k-x) + abs(d-y) <= dist && G[k][d]=='#'){
                    G[k][d] = '.';
                }
            }
        }
    }

    for(auto g: G) {
        cout << g << "\n";
    }
    
    return 0;
}

