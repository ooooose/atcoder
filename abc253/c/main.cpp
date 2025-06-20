#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q;cin>>Q;
    map<int,int> M;
    while(Q--)
    {
        int t;cin>>t;
        if(t==1)
        {
            int x;cin>>x;
            M[x]++;
        }
        else if(t==2)
        {
            int x,c;cin>>x>>c;
            M[x]-=min(c,M[x]);
            if(M[x]<=0)M.erase(x);
        }
        else if(t==3)
        {
            int max_x=M.rbegin()->first;
            int min_x=M.begin()->first;
            cout<<max_x-min_x<<endl;
        }
    }
    return 0;
}

