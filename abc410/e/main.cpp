#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

const int MAX_M=3009;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,H,M;cin>>N>>H>>M;
    vector<int> A(N+1),B(N+1);
    for(int i=0;i<N;i++)cin>>A[i]>>B[i]; 
    vector<int> dp_prev(MAX_M,-1),dp_cur(MAX_M,-1);
    dp_prev[M]=H;
    int max_mons=0;

    for(int i=0;i<N;++i){
        fill(dp_cur.begin(),dp_cur.end(),-1);
        for(int m=0;m<=3000;++m){
            if(dp_prev[m]==-1)continue;
            if(dp_prev[m]>=A[i])dp_cur[m]=max(dp_cur[m],dp_prev[m]-A[i]);
            if(m>=B[i])dp_cur[m-B[i]]=max(dp_cur[m-B[i]],dp_prev[m]);
        }
        bool p=false;
        for(int m=0;m<=3000;++m){
            if(dp_cur[m]>=0){
                p=true;
                break;
            }
        }
        if(p){
            max_mons=i+1;
            dp_prev.swap(dp_cur);
        }
        else break;

    }
    cout<<max_mons<<endl;
    return 0;
}
