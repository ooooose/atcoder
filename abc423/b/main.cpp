#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> L(N+1,0);
    for(int i=1;i<=N;i++)cin>>L[i];
    int right=0,left=N;
    for(int i=0;i<=N;i++)
    {
        if(L[i]==0)right++;
        else break;
    }

    for(int i=N;i>=0;i--)
    {
        if(L[i]==0)left--;
        else break;
    }
    if(left>right) cout<<left-right<<endl;
    else cout<<0<<endl;
    return 0;
}

