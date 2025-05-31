#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

// imos法で解けるとのことなので解き直し（実装したことない）
// こういう区間加算を用いる問題はimos法が有用かも
int main() {    
    int N, M;
    cin >> N >> M;

    // 累積和計算をする際にN+1と余分に持っていた方が安全らしい
    // 今回の場合はNだけでも問題ない
    vector<int> imos(N+1);

    // 区間加算の処理を行う。
    // 始点に+1をしておき終点+1に-1をしておく処理をする
    rep(i, M) {
        int l, r;
        cin >> l >> r;
        // 0indexでl以上R以下を再現
        l--;
        imos[l]++;
        // r（1indexではR+1）の位置（終点から1個ずれた位置）をデクリメント
        imos[r]--;
    }

    // 差分配分から実際の配列を求めるために累積和を計算する
    // これにより区間の重なっている数がimosの配列に格納される
    // サンプル1だと[1,1,1,2,3,2,2,2,2,2]という配列になる。
    for(int i=1; i<=N; i++) imos[i] += imos[i-1];

    // imosの中から最小値を求める。
    // *min_elementだと余分な要素数を確保している場合は正解がでないので、0...Nまでのループで制御、minで計算がいい気もする
    int ans = INT_MAX;
    rep(i, N) ans = min(ans, imos[i]);
    
    cout << ans << endl;
    return 0;
}
