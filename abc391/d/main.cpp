#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
const ll INF=1LL<<60;
 
struct Block{
    int col;
    int y;
    int id;
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N,W;cin>>N>>W;
    vector<int> X(N+1),Ycoord(N+1);
    vector<vector<pair<int,int>>> cols(W+1);
    for(int i=1;i<=N;i++)
    {
        cin>>X[i]>>Ycoord[i];
        cols[X[i]].push_back({Ycoord[i],i});
    }
    
    int max_order=0;
    vector<int> rank_in_col(N+1,0);
    for (int x=1;x<=W;x++)
    {
        sort(cols[x].begin(),cols[x].end(),[](auto a,auto b){return a.first < b.first;});
        int sz=cols[x].size();
        max_order=max(max_order,sz);
        for (int i=0;i<sz;i++)
        {
            int bid=cols[x][i].second;
            rank_in_col[bid]=i+1;
        }
    }
    
    int d_size=N+2;
    vector<ll> d(d_size,0);
    for (int c=1;c<=max_order;c++)
    {
        bool full=true;
        ll cur_max=0;
        for (int x=1;x<=W;x++)
        {
            if((int)cols[x].size()<c)
            {
                full=false;
                break;
            }
            else cur_max=max(cur_max,(ll)cols[x][c-1].first);
        }
        if(!full)d[c]=INF;
        else d[c]=cur_max;
    }
    d[max_order+1]=INF;

    for(int c=2;c<=N+1;c++)d[c]=max(d[c],d[c-1]+1);
    
    int Q;cin>>Q;
    for(int i=0;i<Q;i++)
    {
        int T,A;cin>>T>>A;
        int r=rank_in_col[A];
        if(T<d[r])cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
    return 0;
}

