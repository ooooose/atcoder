#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;

    while(T--)
    {
        int N;cin>>N;

        vector<pair<ll,ll>> wp(N);
        ll sum_p=0;
        for(int i=0;i<N;i++)
        {
            cin>>wp[i].first>>wp[i].second;
            sum_p+=wp[i].second;
        }

        ll res=0;

        sort(wp.begin(),wp.end(),[](const pair<ll,ll> &a, const pair<ll,ll> &b) { return a.first + a.second < b.first + b.second; });
        for(int i=0;i<N;i++)
        {
            res+=wp[i].first+wp[i].second;

            if(sum_p<res)
            {
                cout<<i<<endl;
                break;
            }
        }

    }

    
    return 0;
}

