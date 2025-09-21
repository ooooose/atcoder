#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> edges;
    int A,B,C;cin>>A>>B>>C;
    edges.insert(A);
    edges.insert(B);
    edges.insert(C);

    if(edges.size()<=2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}

