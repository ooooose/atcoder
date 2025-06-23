#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int V;cin>>V;
    vector<int> S(3);
    map<int,char> P={{0,'F'},{1,'M'},{2,'T'}};
    for(int i=0;i<3;i++)cin>>S[i];
    int id=0;
    while(V>0)
    {
        id%=3;
        V-=S[id];
        if(V<0)break;
        id++;
    }
    id%=3;
    cout<<P[id]<<endl;
    return 0;
}

