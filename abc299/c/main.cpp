#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N;
    cin>>N;
    string S;
    cin>>S;
    int ans=0;
    bool flag=false;
    int cnt=0;
    rep(i,N-1){
        if(flag){
            if(S[i]=='o')cnt++;
            if(S[i+1]=='-'){
                ans=max(ans,cnt);
                flag=false;
                cnt=0;
            }
        }
        if(!flag){
            if(S[i+1]=='-')flag=false;
            else if(S[i+1]=='o')flag=true;
        }
    }
    if(ans>0)cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}

