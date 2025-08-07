#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    
    map<int,int> counter;

    long ans=0;

    for(int i=0;i<N;i++)
    {
        int a;cin>>a;
        ans+=counter[i-a];
        ++counter[i+a];
    }

    cout<<ans<<endl;
    return 0;
}

