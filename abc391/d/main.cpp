#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;
// 考察
// 全てのマス目を操作すると計算量的にオーバーするので別の指標で管理する必要がある
// この場合、ブロックがx列のC番目にあるとすると、操作回数はC回目に消滅する時刻が来る。
// 一番下の行ブロックが消滅する時刻を列挙できれば、どのタイミングでどのブロックが存在するかしないかを判定することができる。
// 時刻は各列で1番下にあるブロックが1番下の行に到達する時刻の最大値+1を求めればよい。
// データの持ち方は{y, x}でもってyでソートをかけることで列ごとに管理ができる
// N個のブロックだから2 * (10**5)、N個のブロックをfor文で回しても計算量はO(N)
int main() {
  int n, w;
  cin >> n >> w;

  // 各列ごとのブロックを管理
  vector<vector<int>> columns(w + 1);
  vector<int> x(n), y(n);

  // 入力を受け取り、列ごとにブロックを分類
  rep(i, n) {
    cin >> x[i] >> y[i];
    columns[x[i]].push_back(y[i]);
  }

  // 各列のブロックをソートしていく。
  for(int i = 1; i <= w; i++) sort(columns[i].begin(), columns[i].end());

  // d(各ブロックが消えるタイミング)を計算する。
  vector<ll> times(n + 2, LLONG_MAX); // d[c]を管理する
  times[1] = 0;

  for(int i = 1; i <= w; i++) {
    int c = columns[i].size();
    rep(j, c) times[j+1] = max(times[j+1], (ll)columns[i][j]);
    times[c+1] = LLONG_MAX;
  }

  int q;
  cin >> q;
  while(q--) {
    ll t;
    int a;
    cin >> t >> a;
    a--; // 0インデックスに調整
    // ブロックaが時刻 t+0.5に存在するかを確認する
    if (t < times[a + 1]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}

