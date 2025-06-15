#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    string S;cin>>S;
    int ans=0;
    for(int x1=0;x1<10;x1++)for(int x2=0;x2<10;x2++)for(int x3=0;x3<10;x3++){
        vector<int> tmp={x1,x2,x3};
        int f=0;
        for(int i=0;i<N;i++){
            if(int(S[i]-'0')==tmp[f])f++;
            if(f==3)break;
        }
        if(f==3)ans++;
    }
    cout<<ans<<endl;
    return 0;
}

