#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;

    vector<vector<bool>> T(N,vector<bool>(N,false));
    vector<vector<bool>> A(N,vector<bool>(N,false));

    for(int i=0;i<M;i++)
    {
        int u,v;cin>>u>>v;
        u--;v--;
        T[u][v]=T[v][u]=true;
    }

    for(int i=0;i<M;i++)
    {
        int u,v;cin>>u>>v;
        u--;v--;
        A[u][v]=A[v][u]=true;
    }
    vector<int> perm(N);
    iota(perm.begin(),perm.end(),0);

    do{
        bool match=true;
        for(int i=0;i<N&&match;i++)
        {
            for(int j=0;j<N&&match;j++)
            {
                if(T[i][j]!=A[perm[i]][perm[j]])match=false;
            }

        }
        if(match)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }while(next_permutation(perm.begin(),perm.end()));

    cout<<"No"<<endl;
    return 0;
}

