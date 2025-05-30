#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

// 配列Aに対してソートをして、小さい順から0からK-1を探索
// i=A[i]となっていない場合は、MEXの条件を満たすためiが答えとなる。
// 一方で、ループが終わるまで上記の条件が達成されない場合にはKが答えになる。
// Aには重複している値があってはいけない点と昇順にソートされていることが実装の条件となるためSetで配列Aを管理する。
int main() {
    int N, K;
    cin >> N >> K;
    set<int> A;
    rep(i, N) {
        int a;
        cin >> a;
        A.insert(a);
    }

    rep(i, K) {
        // Aの配列にiが存在しなかった場合
        if(A.find(i) == A.end()) {
            // iを出力してreturn（処理を終了する）
            cout << i << endl;
            return 0;
        }
    }
    // リターンせずにループを抜けた場合にはKが答えになる
    cout << K << endl;
    return 0;
}

