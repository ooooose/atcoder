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
    int cnt=0;
    rep(i,N){
        if(S[i]=='o')cnt++;
        if(S[i]=='-'){
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    if(ans>0)cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}

