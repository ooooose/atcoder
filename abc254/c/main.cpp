#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;cin>>N>>K;
    vector<vector<int>> B(K);
    vector<int> A(N);

    for(int i=0;i<N;i++){
        cin>>A[i];
        B[i%K].push_back(A[i]);
    }

    for(int i=0;i<K;i++)sort(B[i].rbegin(),B[i].rend());
    sort(A.begin(),A.end());

    vector<int> NA;
    for(int i=0;i<N;i++){
        NA.push_back(B[i%K].back());
        B[i%K].pop_back();
    }

    if(A==NA)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

