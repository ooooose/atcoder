#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> cards;
    map<int,int> C;
    for(int i=0;i<5;i++){
        int x;cin>>x;
        cards.insert(x);
        C[x]++;
    }
    if(cards.size()==2){
        bool ok=true;
        for(int c:cards){
            if(C[c]==1||C[c]==4)ok=false;
        }
        if(ok)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;
    return 0;
}

