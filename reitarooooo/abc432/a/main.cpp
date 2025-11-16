#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> A(3);
    cin>>A[0]>>A[1]>>A[2];
    sort(A.rbegin(),A.rend());
    for(int i=0;i<3;i++)cout<<A[i];
    cout<<endl;
    
    return 0;
}

