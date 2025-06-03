#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using P = pair<int, int>;

// 二次元上をBFSで探索し、感染者を特定する
int main() {
    int N, D;
    cin >> N >> D;
    vector<P> V(N);

    rep(i, N) cin >> V[i].first >> V[i].second;
    vector<bool> infected(N, false);

    // 人1は感染しているのでtrue
    infected[0] = true;

    // BFS用のキューを用意
    queue<int> q;
    q.push(0);

    while(!q.empty()) {
        int current = q.front();
        q.pop();

        // N人を探索
        rep(i, N) {
            // 元々感染していればスキップ
            if(infected[i]) continue;

            int x = V[current].first - V[i].first;
            int y = V[current].second - V[i].second;

            // 誤差が若干ん怖いので距離の2乗で計算する
            if(x*x + y*y <= D * D){
                infected[i] = true;
                // 新たな感染者をキューに追加
                q.push(i);
            }
        }
    }

    // 感染状況を見て出力
    for(bool i : infected) {
        if(i) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}

