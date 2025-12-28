#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,ans=0;cin>>N;

    for(int i=1;i<=N;i++)ans+=i;

    cout<<ans<<endl;
    return 0;
}

