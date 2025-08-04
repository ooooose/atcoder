#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    string T((int)S.size(), '.');
    int cnt=0;
    if(T[0]=='.')T[0]='o';
    for(int i=0;i<(int)S.size();i++)
    {
        if(S[i]=='#')
        {
            T[i]='#';
            cnt++;
        }
        else
        {
            if(cnt>=1)
            {
                T[i]='o';
                cnt=0;
            }
        }
    }
    cout<<T<<endl;
    return 0;
}

