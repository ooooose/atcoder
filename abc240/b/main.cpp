#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    set<int> S;
    for(int i=0;i<N;i++)
    {
        int a;cin>>a;
        S.insert(a);
    }
    cout<<(int)S.size()<<endl;
    return 0;
}

