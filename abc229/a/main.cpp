#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S1,S2;cin>>S1>>S2;
    if(S1==".#"&&S2=="#.")
    {
        cout<<"No"<<endl;
        return 0;
    }
    else if(S1=="#."&&S2==".#")
    {
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    return 0;
}

