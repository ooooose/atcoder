#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,L,R;
    cin>>N>>L>>R;
    int cnt=0;
    for(int i=0;i<N;i++)
    {
        int X,Y;cin>>X>>Y;
        if(X<=L&&R<=Y)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

