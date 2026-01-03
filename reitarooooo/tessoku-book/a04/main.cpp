#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    for(int i=9;i>=0;i--)
    {
        int wari=(1<<i);
        cout<<(N/wari)%2;
    }
    cout<<endl;
    return 0;
}

