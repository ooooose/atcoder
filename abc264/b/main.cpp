#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int R,C;cin>>R>>C;
    if(max(abs(R-8), abs(C-8))%2)cout<<"black"<<endl;
    else cout<<"white"<<endl;
    return 0;
}

