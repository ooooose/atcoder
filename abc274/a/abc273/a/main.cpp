#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W,N;
    cin>>H>>W>>N;
    vector<string> S(H);
    for(int i=0;i<H;i++)cin>>S[i];
    for(int i=0;i<N;i++){
        int x,y;cin>>x>>y;
        cout<<S[x][y]<<endl;
    }
    
    return 0;
}

