#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int K;cin>>K;
    int h=21+K/60;
    int m=K%60;

    cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<endl;
    return 0;
}

