#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,M;cin>>N>>M;
    string S,T;
    cin>>S>>T;
    vector<int> imos(N+1,0);
    while(M--)
    {
        int L,R;cin>>L>>R;
        L--;
        imos[L]++;
        imos[R]--;
    }
    vector<int> pos(N+1,0);
    for(int i=0;i<N;i++) pos[i+1]=pos[i]+imos[i];

    for(int i=0;i<N;i++)if(pos[i+1]%2==1)swap(S[i],T[i]);

    cout<<S<<endl;
    return 0;
}

