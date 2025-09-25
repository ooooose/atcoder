#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,Q; cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin>>A[i];
    set<int> sums;
    for(int bit=0;bit<(1<<N);++bit)
    {
        int sum=0;
        for(int i=0;i<N;i++)if(bit&(1<<i))sum+=A[i];
        sums.insert(sum);
    }

    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        int m;cin>>m;
        cout<<(sums.count(m)?"yes":"no")<<"\n";
    }
    return 0;
}
