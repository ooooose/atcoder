#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S,T;
    cin>>S;
    cin>>T;
    vector<pair<char,int>> SC;
    vector<pair<char,int>> TC;
    int x=1;
    for(int i=1;i<(int)S.size();i++){
        if(S[i-1]!=S[i]){
            SC.push_back(make_pair(S[i-1], x));
            x=0;
        }
        x++;
    }
    SC.push_back(make_pair(S.back(),x));
    int y=1;
    for(int i=1;i<(int)T.size();i++){
        if(T[i-1]!=T[i]){
            TC.push_back(make_pair(T[i-1],y));
            y=0;
        }
        y++;
    }
    TC.push_back(make_pair(T.back(),y));
    if(SC.size()!=TC.size()){
        cout<<"No"<<endl;
    }
    bool flag=true;
    for(int i=0;i<(int)SC.size();i++){
        if(SC[i].first!=TC[i].first)flag=false;
        if(!(SC[i].second==TC[i].second||SC[i].second<TC[i].second&&SC[i].second>=2))flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

