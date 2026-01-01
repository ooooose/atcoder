#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    set<int> mochi;
    for(int i=0;i<N;i++)
    {
        int A;cin>>A;
        mochi.insert(A);
    }

    cout<<mochi.size()<<endl;
    return 0;
}

