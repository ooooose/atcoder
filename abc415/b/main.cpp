#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int cnt=0;
    int start=0;
    for(int i=0;i<(int)S.size();i++)
    {
        if(S[i]=='.') continue;
        else if(S[i]=='#')
        {
            cnt++;
            if(cnt%2!=0)start=i+1;
            else {
                cout<<start<<','<<i+1<<endl;
            }
        }
    }
    return 0;
}

