#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X,Y;cin>>X>>Y;

    for(int i=0;i<Y;i++)X*=2;

    cout<<X<<endl;
    return 0;
}

