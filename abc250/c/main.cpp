#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    // ボール番号のindexを管理するmap
    map<int,int> pos;
    // indexとボール番号を管理するmap
    map<int,int> val;
    for(int i=0;i<N;i++)
    {
        pos[i+1]=i;
        val[i]=i+1;
    }
    while(Q--)
    {
        int x;cin>>x;
        int p=pos[x];
        int q;
        if(p==N-1) q=p-1;
        else q=p+1;
        int y=val[q];
        swap(val[p],val[q]);
        swap(pos[x],pos[y]);

    }
    for(int i=0;i<N;i++)cout<<val[i]<<(i==N-1?"\n":" ");
    cout<<endl;
    return 0;
}

