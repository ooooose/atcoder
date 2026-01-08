#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

const int dx[4] = {0,1,0,1};
const int dy[4] = {0,0,1,1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin>>N>>M;

    set<pair<int,int>> st;
    int ans = 0;
    while(M--)
    {
        int R,C;cin>>R>>C;
        R--;C--;

        bool ok = true;

        for(int i=0;i<4;i++)
        {
            if(st.count(make_pair(R+dx[i],C+dy[i])))ok = false;
        }
        if(ok)
        {
            for(int i=0;i<4;i++)st.insert(make_pair(R+dx[i],C+dy[i]));
            ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}

