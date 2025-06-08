#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    set<char> S;
    rep(i,N){
        char s;
        cin>>s;
        S.insert(s);
    }
    if(S.size()==4)cout<<"Four"<<endl;
    else if(S.size()==3)cout<<"Three"<<endl;
    
    return 0;
}

