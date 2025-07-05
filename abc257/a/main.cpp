#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,X;cin>>N>>X;

    string S;
    for(char i='A';i<='Z';i++)
    {
        for(int j=0;j<N;j++)S+=i;
    }
    cout<<S[X-1]<<endl;
    
    return 0;
}

