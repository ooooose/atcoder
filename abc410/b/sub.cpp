#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    vector<int> box(N,0);
    vector<int> ans(Q,0);
    for(int i=0;i<Q;i++){
        int x;cin>>x;
        if(x>0){
            box[x-1]++;
            ans[i]=x;
        }
        else{
            int target=0;
            int min_cnt=box[0];
            for(int j=0;j<i;j++){
                if(box[j]<min_cnt){
                    min_cnt=box[j];
                    target=j;
                }
            }
            ans[i]=min_cnt+1;
            box[target]++;
        }
    }
    for(int a:ans)cout<<a<<" ";
    cout<<endl;
    return 0;
}
