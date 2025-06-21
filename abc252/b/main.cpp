#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K; cin>>N>>K;
    vector<int> A(N);
    set<int> B;
    int mx=0;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
        mx=max(mx,A[i]);
    }
    for(int i=0;i<K;i++)
    {
        int b;cin>>b;
        b--;
        B.insert(b);
    }
    for(int i=0;i<N;i++)
    {
        if(A[i]==mx&&B.count(i))
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    
    cout<<"No"<<endl;
    return 0;
}

