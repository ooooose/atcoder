#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;cin>>N>>K;
    // Aの配列を分解して保持するための配列
    vector<vector<int>> B(K);
    // Aは最終的に比較するために作成
    vector<int> A(N);

    for(int i=0;i<N;i++){
        cin>>A[i];
        // Kごとの要素をBにpush_backする。
        B[i%K].push_back(A[i]);
    }

    // それぞれのB[i]を降順にソートする
    for(int i=0;i<K;i++)sort(B[i].rbegin(),B[i].rend());
    sort(A.begin(),A.end());

    vector<int> NA;
    for(int i=0;i<N;i++){
        // Bに入れた逆をやる。
        NA.push_back(B[i%K].back());
        B[i%K].pop_back();
    }

    // 最終的にAとNAが一致すればYesを、しなければNoを返す
    if(A==NA)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

