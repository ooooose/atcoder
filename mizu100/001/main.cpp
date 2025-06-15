#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while(true){
        int N,X;cin>>N>>X;
        if(N==0&&X==0)break;
        int ans=0;
        for(int i=1;i<=N;i++){
            for(int j=i+1;j<=N;j++){
                for(int k=j+1;k<=N;k++){
                    if(i+j+k==X)ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

