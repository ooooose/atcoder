#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, Q;
    cin>>N>>Q;
    vector<int> box(N,0);
    vector<int> ans(Q,0);
    
    for (int i=0;i<Q;i++){
        int x;cin>>x;
        if(x>=1){
            ans[i]=x;
            box[x-1]++;
        }
        else{
            int min_cnt=box[0];
            int min_box=0;
            for (int j=1;j<N;j++){
                if(box[j]<min_cnt){
                    min_cnt=box[j];
                    min_box=j;
                }
            }
            ans[i]=min_box+1;
            box[min_box]++;
        }
    }
    for (int i=0;i<Q;i++){
        cout<<ans[i]<<(i+1==Q?"":" ");
    }
    return 0;
}
