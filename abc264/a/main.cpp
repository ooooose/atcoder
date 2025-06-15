#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
const string atcoder="atcoder";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int L,R;cin>>L>>R;
    cout<<atcoder.substr(L-1,R-L+1)<<endl;
    
    return 0;
}

