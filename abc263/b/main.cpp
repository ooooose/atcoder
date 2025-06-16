#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    map<int,int> A;
    for(int i=2;i<=N;i++){
        int p;cin>>p;
        A[i]=p;
    }
    int cur=A[N];
    int ans=1;
    for(int i=2;i<=N;i++){
        if(cur==1)break;
        cur=A[cur];
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}

