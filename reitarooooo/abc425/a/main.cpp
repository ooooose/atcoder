#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    int ans=0;
    for(int i=1;i<=N;i++)
    {
        ans+=pow(-1,i)*i*i*i;
    }
    
    cout<<ans<<endl;
    return 0;
}

