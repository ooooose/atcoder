#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> A(N);
    set<int> S;
    for(int i=0;i<N;i++){
        cin>>A[i];
        S.insert(A[i]);
    }

    vector<int> D(N);
    for(int i=0;i<N;i++){
        auto it=S.lower_bound(A[i]);
        D[i]=(int)distance(it,S.end())-1;
    }
    map<int,int> DM;
    for(int i=0;i<N;i++)DM[D[i]]++;
    for(int i=0;i<N;i++)cout<<DM[i]<<endl;
    
    return 0;
}

