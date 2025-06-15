#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    int ans=0;
    for(int n=1;n<=N;n+=2){
        int cnt=0;
        for(int i=1;i<=n;++i)if(n%i==0)++cnt;
        if(cnt==8)++ans;
    }
    cout<<ans<<endl;
    return 0;
}

