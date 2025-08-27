#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int start=0, goal=S.size();
    for(int i=0;i<(int)S.size();i++)
    {
        if(S[i]=='t')
        {
            start=i;
            break;
        }
    }
    for(int i=S.size();i>0;i--)
    {
        if(S[i]=='t')
        {
            goal=i;
            break;
        }
    }
    double ans;
    if(start==0&&goal==S.size())
    {
        ans=0;
    }
    else 
    {
        int t=goal-start+1;
        int x=0;
        for(int i=start;i<=goal;i++)
        {
            if(S[i]=='t')x++;
        }
        ans=(double)(x-2)/(t-2);
    }

    cout<<fixed<<setprecision(15)<<ans<<endl;
    return 0;
}

