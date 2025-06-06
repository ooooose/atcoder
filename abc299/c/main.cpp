#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N;
    cin>>N;
    string S;
    cin>>S;
    int ans=-1;
    bool flag=false;
    int cnt=0;
    rep(i,N){
        if(S[i]=='o')cnt++;
        else if(S[i]=='-'){
            if(cnt>0)ans=max(ans,cnt);
            cnt=0;
            flag=true;
        }
    }
    if(cnt>0&&flag)ans=max(ans,cnt);
    cout<<ans<<endl;
    return 0;
}

