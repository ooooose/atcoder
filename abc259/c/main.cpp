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
    char cur_s=S[0];
    int x=0;
    for(int i=0;i<(int)S.size();i++){
        if(cur_s!=S[i]){
            SC.push_back(make_pair(cur_s, x));
            cur_s=S[i];
            x=1;
        }
        else x++;
    }
    SC.push_back(make_pair(cur_s,x));
    char cur_t=T[0];
    int y=0;
    for(int i=0;i<(int)T.size();i++){
        if(cur_t!=T[i]){
            TC.push_back(make_pair(cur_t,y));
            cur_t=T[i];
            y=1;
        }
        else y++;
    }
    TC.push_back(make_pair(cur_t,y));
    if(SC.size()!=TC.size()){
        cout<<"No"<<endl;
    }
    bool flag=true;
    for(int i=0;i<(int)SC.size();i++){
        if(SC[i].first!=TC[i].first)flag=false;
        else{
            if(SC[i].second<TC[i].second&&SC[i].second<2)flag=false;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

