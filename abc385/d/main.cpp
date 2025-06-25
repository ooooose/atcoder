#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N,M;
    long long Sx,Sy;
    cin>>N>>M>>Sx>>Sy;

    map<long long, set<long long>> row_h;
    map<long long, set<long long>> col_h;
    for(int i=0;i<N;i++){
        long long x,y;
        cin>>x>>y;
        row_h[y].insert(x);
        col_h[x].insert(y);
    }

    set<pair<long long,long long>> visited;

    for(int i=0;i<M;i++)
    {
        char dir;
        long long dist;
        cin>>dir>>dist;

        if(dir=='U')
        {
            auto& yset=col_h[Sx];
            auto it=yset.lower_bound(Sy+1);
            while(it!=yset.end() && *it<=Sy+dist)
            {
                visited.emplace(Sx,*it);
                ++it;
            }
            Sy+=dist;
        }
        else if(dir=='D')
        {
            auto& yset=col_h[Sx];
            auto it=yset.lower_bound(Sy-dist);
            while(it!=yset.end() && *it<=Sy-1)
            {
                visited.emplace(Sx,*it);
                ++it;
            }
            Sy-=dist;
        }
        else if(dir=='R')
        {
            auto& xset=row_h[Sy];
            auto it=xset.lower_bound(Sx+1);
            while(it!=xset.end() && *it<=Sx+dist)
            {
                visited.emplace(*it,Sy);
                ++it;
            }
            Sx+=dist;
        }
        else if(dir=='L')
        {
            auto& xset=row_h[Sy];
            auto it=xset.lower_bound(Sx-dist);
            while(it!=xset.end() && *it<=Sx-1)
            {
                visited.emplace(*it,Sy);
                ++it;
            }
            Sx-=dist;
        }
    }
    cout<<Sx<<" "<<Sy<<" "<<visited.size()<<"\n";
    return 0;
}

