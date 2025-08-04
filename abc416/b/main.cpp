#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int N=S.size();
    for(int i=0;i<N;i++)
    {
        if(S[i]=='#')cout<<'#';
        else if(i==0||S[i-1]=='#')cout<<'o';
        else cout<<'.';
    }
    cout<<endl;
    return 0;
}

