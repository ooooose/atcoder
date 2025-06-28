#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int N=S.size();

    int x=0,y=0;
    for(int i=0;i<N;i++)
    {
        if(S[i]=='a')x++;
        else break;
    }
    for(int i=N-1;i>=0;i--)
    {
        if(S[i]=='a')y++;
        else break;
    }

    if(x==N)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    if(x>y)
    {
        cout<<"No"<<endl;
        return 0;
    }

    for(int i=x;i<N-y;i++)
    {
        if(S[i]!=S[x+N-y-i-1])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}

