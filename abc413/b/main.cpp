#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<string> S(N);
    for(int i=0;i<N;i++)cin>>S[i];

    set<string> A;
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)
    {
        if(i==j)continue;
        A.insert(S[i]+S[j]);
    }

    cout<<A.size()<<endl;
    return 0;
}

