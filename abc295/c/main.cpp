#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N;
    cin>>N;
    set<int> A;
    map<int, int> socks;
    rep(i,N){
        int a;
        cin>>a;
        A.insert(a);
        socks[a]++;
    }

    int cnt=0;
    for(auto a : A){
        cnt+=socks[a]/2;
    }
    cout<<cnt<<endl;
    return 0;
}

