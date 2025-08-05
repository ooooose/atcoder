#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,M;cin>>N>>M;
    vector<int> A(N),nxt;
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<M;i++)
    {
        int X;cin>>X;
        bool flag=true;
        N=A.size();
        nxt.clear();
        for(int j=0;j<N;j++)
        {
            if(A[j]==X&&flag) flag=false;
            else nxt.push_back(A[j]);
        }
        A=nxt;
    }

    N=A.size();
    for(int i=0;i<N;i++)cout<<A[i]<<((i!=N-1)?" ":"");
    cout<<endl;
    return 0;
}

