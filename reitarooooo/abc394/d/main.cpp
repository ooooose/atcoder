#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int N=S.size();
    vector<int> points;
    vector<bool> vis(N,false);

    for(int i=0;i<N-1;i++)
    {
        if(S[i]=='('&&S[i+1]==')')points.push_back(i);
        if(S[i]=='<'&&S[i+1]=='>')points.push_back(i);
        if(S[i]=='['&&S[i+1]==']')points.push_back(i);
    }

    for(int i=0;i<(int)points.size();i++)
    {
        int x=points[i];
        int cur=0;
        while(true)
        {
            int nl=x-cur;
            int nr=x+cur+1;
            if(nl<0||nr>=N)break;
            vis[nl]=vis[nr]=true;
            cur++;
            if(!((S[nl]=='['&&S[nr]==']')||(S[nl]=='('&&S[nr]==')')||(S[nl]=='<'&&S[nr]=='>')))break;
        }
    }
    
    for(bool v: vis)if(!v)
    {
        cout<<"No"<<endl;
        return 0;
    }
    
    cout<<"Yes"<<endl;
    return 0;
}

