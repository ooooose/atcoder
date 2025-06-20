#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<pair<string,int>> poem(N);
    set<string> S;
    for(int i=0;i<N;i++)
    {
        cin>>poem[i].first>>poem[i].second;
    }

    int idx=0;
    int mx=0;
    for(int i=0;i<N;i++)
    {
        if(poem[i].second>mx&&!S.count(poem[i].first))
        {
            mx=max(mx,poem[i].second);
            idx=i+1;
        }
        S.insert(poem[i].first);
    }
    cout<<idx<<endl;
    return 0;
}

