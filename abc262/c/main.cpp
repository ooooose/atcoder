#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    map<int,int> A;
    int same=0;
    for(int i=1;i<=N;i++){
        int a;cin>>a;
        A[a]=i;
        if(a==i)same++;
    }
    int ans=0;
    for(int i=1;i<=N;i++){
        if(A[i]==i)continue;
        if(A[A[i]]==i)ans++;
    }
    ans/=2;
    if(same>0)ans+=same*(same-1)/2;
    cout<<ans<<endl;
    return 0;
}

