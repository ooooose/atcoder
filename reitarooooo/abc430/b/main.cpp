#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<string> S(N);
    for(int i=0;i<N;i++)cin>>S[i];

    set<vector<char>> st;

    for(int i=0;i<N-M+1;i++)
    {
        for(int j=0;j<N-M+1;j++)
        {
            vector<char> target;
            for(int k=i;k<M+i;k++)
            {
                for(int d=j;d<M+j;d++)target.push_back(S[k][d]);
            }
            st.insert(target);
        }
    }

    cout<<st.size()<<endl;
    
    return 0;
}

