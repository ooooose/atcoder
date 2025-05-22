#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int n;
    cin >> n;
    // 上から順番に２進数に変換した値を求めていく
    for (int x = 9; x >= 0; x--) {
        // 2^xの値を求める
        int wari = (1 << x);
        // nを2^xで割った値の余りを求める
        cout << (n / wari) % 2;
    }
    // 改行
    cout << endl;
    return 0;
}

