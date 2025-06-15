#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<char> acgt={'A','C','G','T'};

    string S;cin>>S;
    int ans=0;
    int cnt=0;
    for(int i=0;i<S.size();i++){
        bool ok=false;
        for(int j=0;j<acgt.size();j++){
            if(S[i]==acgt[j])ok=true;
        }
        if(ok)cnt++;
        else {
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    ans=max(ans,cnt);
    cout<<ans<<endl;
    
    return 0;
}

