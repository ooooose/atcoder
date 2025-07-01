#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int D,N;
    cin>>D>>N;
    vector<int> imos(D);
    for(int i=0;i<N;i++)
    {
        int l,r;cin>>l>>r;
        l--;
        imos[l]++;
        imos[r]--;
    }
    for(int i=0;i<D;i++)imos[i+1]+=imos[i];
    for(int i=0;i<D;i++)cout<<imos[i]<<endl;
    return 0;
}

