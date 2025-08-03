#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    set<int> A;
    for(int i=0;i<N;i++)
    {
        int a;cin>>a;
        A.insert(a);
    }
    int X;cin>>X;

    cout<<(A.count(X)?"Yes":"No")<<endl;
    return 0;
}

