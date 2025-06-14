#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin>>S;
    int len=(int)S.size();
    cout<<S[(len)/2]<<endl;
    return 0;
}

