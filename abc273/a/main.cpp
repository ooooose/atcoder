#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int f(int k)
{
    if(k==0)return 1;
    return k*f(k-1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    int ans=f(N);
    cout<<ans<<endl;
    return 0;
}
