#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,A;
    cin>>N>>A;
    if(N%500<=A) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}

