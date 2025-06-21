#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int l = 6/(int)S.size();
    for(int i=0;i<l;i++)
    {
        cout<<S;
    }
    cout<<endl;
    return 0;
}

