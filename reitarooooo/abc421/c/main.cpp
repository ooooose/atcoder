#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    string S;cin>>S;

    vector<int> apos;

    for(int i=0;i<2*N;i++)if(S[i]=='A')apos.push_back(i);

    long long ans_1=0;
    for(int i=0;i<N;i++)
    {
        ans_1+=abs(apos[i]-2*i);
    }

    long long ans_2=0;
    for(int i=0;i<N;i++)
    {
        ans_2+=abs(apos[i]-(2*i+1));
    }

    cout<<min(ans_1,ans_2)<<endl;
    return 0;
}

