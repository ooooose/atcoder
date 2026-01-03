#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;

    int pow=1;
    for(int i=0;i<N;i++)pow*=2;

    cout<<pow-2*N<<endl;
    return 0;
}

