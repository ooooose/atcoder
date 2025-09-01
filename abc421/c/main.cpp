#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    string S;cin>>S;

    vector<int> apos;
    for(int i=0;i<2*N;i++) 
    {
        if(S[i]=='A')apos.push_back(i);
    }

    long long cost1=0;
    for(int k=0;k<N;k++)
    {
        cost1+=abs(apos[k]-2*k);
    }

    long long cost2=0;
    for(int k=0;k<N;k++) 
    {
        cost2+=abs(apos[k]-(2*k+1));
    }

    cout<<min(cost1,cost2)<<endl;
    return 0;
}
