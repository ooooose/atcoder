#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

// 考察
// 数列Aに対して操作を繰り返し行なったとしても数列Aの総和は変化しない。
// 操作を繰り返し行なった後に最大値と最小値の差が1である場合の最小の操作回数。
// i, jを決めるような全探索の場合O(N**2)の計算量がかかりTLEになる。
// そのため、O(N)となるような解法を模索する必要がある。
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    // 配列Aの総和
    ll sum = 0;

    rep(i, n) cin >> a[i], sum += a[i]; 

    sort(a.begin(), a.end());
    // 平均値N個の要素を持つ配列を用意
    // bの要素iはaの要素iに対応する構造になっている
    vector<int> b(n, sum / n);
    // 考察メモ
    // 入力例1の場合、21 % 4 = 1になるのでb[4-1-1] = b[2]に対してインクリメントする
    // 総和が21で、かつ要素が4の場合、必ず+1の要素が21mod4する。
    // つまり+1の要素の個数は(sum mod n)となる。
    // 入力値配列のaをソートして大きい値から(sum mod n)の個数だけ+1インクリメントする。
    // そうするとAiとBiの差分（絶対値）を足し上げ2で割った値が操作回数になる。
    for (int i = 0; i < sum % n; i++) b[n-1-i]++;

    // 答えとなるための値(最終的には2で割った値が答えになる)
    ll ans = 0;
    rep(i, n) ans += abs(a[i] - b[i]);
    // ±1で1回の操作なのでansを2で割ることで答えとなる値を出力できる
    cout << ans / 2 << endl;
    return 0;
}

