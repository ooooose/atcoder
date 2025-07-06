#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    stringstream ss;
    ss<<hex<<uppercase<<setw(2)<<setfill('0')<<N;
    cout<<ss.str()<<endl;
    return 0;
}

