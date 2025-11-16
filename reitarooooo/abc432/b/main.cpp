#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string A;cin>>A;
    vector<int> B;
    for(int i=0;i<3;i++)if(A[i]!='0')B.push_back(A[i]-'0');
    sort(B.begin(),B.end());
    int cnt=3-B.size();

    cout<<B[0];
    for(int i=0;i<cnt;i++)cout<<0;
    for(int i=1;i<B.size();i++)cout<<B[i];
    cout<<endl;
    
    return 0;
}

