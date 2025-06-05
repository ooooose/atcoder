#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N, X;
    cin>>N>>X;
    vector<int> A(N);
    rep(i,N)cin>>A[i];

    auto it=lower_bound(A.begin(),A.end(),X);
    cout << it-A.begin()+1 << endl;
    
    return 0;
}

