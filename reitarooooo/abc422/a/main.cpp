#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S; cin>>S;
    int i=S[0]-'0';
    int j=S[2]-'0';

    if(j<8) j++;
    else
    {
        if(i<8)
        {
            i++;
            j=1;
        }
    }
    cout<<i<<"-"<<j<<endl;
    return 0;
}

