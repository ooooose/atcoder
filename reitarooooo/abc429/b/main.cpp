#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<int> A(N);
    int sums=0;
    for(int i=0;i<N;i++){
        cin>>A[i];
        sums+=A[i];
    }

    bool ok=false;
    for(int i=0;i<N;i++)
    {
        if(sums-A[i]==M)ok=true;
    }

    if(ok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}

