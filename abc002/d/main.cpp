#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<vector<bool>> f(N,vector<bool>(N,false));
    for(int i=0;i<M;i++){
        int x,y;cin>>x>>y;
        x--;y--;
        f[x][y]=f[y][x]=true;
    }
    int ans=0;
    for(int bit=0;bit<(1<<N);bit++){
        vector<int> group;
        for(int i=0;i<N;i++)if(bit&(1<<i))group.push_back(i);
        bool ok=true;
        for(int i=0;i<(int)group.size();i++){
            for(int j=i+1;j<(int)group.size();j++){
                if(!f[group[i]][group[j]])ok=false;
            }
            if(!ok)break;
        }
        if(ok)ans=max(ans,(int)group.size());
    }
    cout<<ans<<endl;
    return 0;
}

