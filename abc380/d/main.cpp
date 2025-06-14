#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){
    string s; 
    cin>>s;
    int len=s.size();
    string sToggle="";
    rep(i,len){
        char c=s[i];
        if(islower(c))sToggle.push_back(toupper(c));
        else sToggle.push_back(tolower(c));
    }
    int Q;
    cin>>Q;
    vector<long long> K(Q);
    rep(i,Q)cin>>K[i];
    rep(i,Q){
        long long d=(K[i]-1)/len;
        long long idx=(K[i]-1)%len;
        char ans;
        if (__builtin_popcountll(d)&1ULL)ans=sToggle[idx];
        else ans=s[idx];
        cout<<ans<<(i+1==Q?"\n":" ");
    }
    return 0;
}
