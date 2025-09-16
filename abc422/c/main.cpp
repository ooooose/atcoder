#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--)
    {
        int A,B,C;cin>>A>>B>>C;
        cout<<min({A,C,(A+B+C)/3})<<endl;
    }

    return 0;
}

