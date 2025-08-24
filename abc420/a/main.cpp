#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X,Y;cin>>X>>Y;
    if((X+Y)%12==0)
    {
        cout<<12<<endl;
    }
    else
    {
        cout<<(X+Y)%12<<endl;
    }
    return 0;
}

