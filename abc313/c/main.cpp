#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

// 考察
// Aiを１減らし、Ajを１増やすという操作をした場合、配列の合計は変化しない
// 平均値と余りを考慮して+1を取得して各要素との差を取得していき、より小さい操作回数が答えになる。
// その際に平均値と要素の差分の合計は0にならないといけないことに注意
// 上振れていたり、下振れていたら0とdiffの差分を答えから差し引く
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;

    rep(i, n) cin >> a[i], sum += a[i]; 

    sort(a.begin(), a.end());
    // 平均値N個の要素を持つ配列を用意
    vector<int> b(n, sum / n);
    for (int i = 0; i < sum % n; i++) {
        b[n-1-i]++;
    }
    ll ans = 0;
    rep(i, n) {
        ans += abs(a[i] - b[i]);
    }
    cout << ans / 2<< endl;
    return 0;
}

