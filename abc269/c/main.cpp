#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    uint64_t N;cin>>N;
    vector<int> bits;
    for(int i=0;i<60;++i){
        if((N>>i)&1)bits.push_back(i);
    }
    int M=bits.size();
    vector<uint64_t> res;
    for(int mask=0;mask<(1<<M);++mask){
        uint64_t x=0;
        for(int i=0;i<M;++i){
            if((mask>>i)&1)x|=(1ULL<<bits[i]);
        }
        res.push_back(x);
    }
    sort(res.begin(),res.end());
    for(auto v:res)cout<<v<<"\n";
    return 0;
}

