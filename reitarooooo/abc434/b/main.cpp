#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    map<int,int> mp;
    vector<int> idx(N);

    for(int i=0;i<N;i++)
    {
        int A,B;cin>>A>>B;
        mp[A-1]+=B;
        idx[A-1]++;
    }

    for(int i=0;i<M;i++)
    {
        cout<<fixed<<setprecision(20)<<(double)mp[i]/idx[i]<<endl;
    }
    
    return 0;
}

