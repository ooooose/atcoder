#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const long long modi=998244353;
    long long N;cin>>N;
    int x=N%modi;
    if(x<0)x+=modi;
    else if(x>modi)x-=modi;
    cout<<x<<endl;
    return 0;
}

