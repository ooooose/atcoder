#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int S,A,B,X;cin>>S>>A>>B>>X;
    int loop=X/(A+B);
    X-=loop*(A+B);
    int ans=S*A*loop;
    if(X<A)ans+=X*S;
    else ans+=A*S;

    cout<<ans<<endl;
    return 0;
}
