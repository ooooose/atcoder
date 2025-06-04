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
        // 0-indexに直す
        a--; b--;
        // 弱いbをインクリメントして記録する
        S[b]++;
    }

    int cnt = 0;
    int target = 0;
    rep(i,N){
        // 最強プログラマ候補を出力
        if (S[i] == 0) {
            cnt++;
            target = i;
        }
    }

    // cntが1つのみ、つまり最強プログラマの候補が1名に絞れればその人の値を出力する
    if (cnt == 1) cout << target+1 << endl;
    else cout << -1 << endl;

    return 0;
}

