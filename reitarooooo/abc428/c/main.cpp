#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Q;cin>>Q;
    string S;
    int bal=0;
    vector<pair<int,int>> bals;
    while(Q--) {
        int query;cin>>query;
        if(query==1)
        {
            char c;cin>>c;
            S.push_back(c);
            bal+=(c=='('?1:-1);
            int min_bal=bals.empty()?bal:min(bal,bals.back().second);
            bals.emplace_back(bal, min_bal);
        } else 
        {
            S.pop_back();
            bals.pop_back();
            bal=bals.empty()?0:bals.back().first;
        }
        int min_bal=bals.empty()?0:bals.back().second;
        if(min_bal>=0&& bal==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
