#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q;cin>>Q;
    deque<pair<ll,ll>> nums;
    
    while(Q--)
    {
        int q;cin>>q;
        if(q==1)
        {
            ll c,x;cin>>c>>x;
            nums.push_back(make_pair(c,x));
        }
        else if(q==2)
        {
            ll k;cin>>k;
            ll total=0;
            
            while(k>0&&!nums.empty())
            {
                auto [c,x]=nums.front();nums.pop_front();
                ll take=min(k,c);
                total+=take*x;
                k-=take;
                
                if(c>take)nums.push_front(make_pair(c-take,x));
            }
            cout<<total<<endl;
        }
    }
    return 0;
}

