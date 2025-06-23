#include <bits/stdc++.h>
using namespace std;
using ll=long long;

struct Preset 
{
    ll X,Y;
    char col;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll N;
    int M;
    cin>>N>>M;
    vector<Preset> P(M);
    for (int i=0;i<M;i++)
    {
        ll x,y;
        char c;
        cin>>x>>y>>c;
        P[i]={x,y,c};
    }
    
    sort(P.begin(),P.end(),[](const Preset &a,const Preset &b){
        if(a.X!=b.X)return a.X<b.X;
        return a.Y<b.Y;
    });
    
    int INF=1<<30;
    int min_y=INF;
    string ans="Yes";
    for (auto &p: P){
        if(p.col=='W')min_y=min(min_y,(int)p.Y);
        else 
        {
            if(p.Y>=min_y)
            {
                ans="No";
                break;
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}
