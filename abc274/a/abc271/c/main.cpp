#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    map<int,int> count;
    for(int i=0;i<N;++i){
        int a;cin>>a;
        count[a]++;
    }
    int next=1;
    int rest=0;
    for(auto [k,v]: count){
        rest+=v;
    }
    while(true){
        if(count[next]>0){
            count[next]--;
            rest--;
            next++;
        }else{
            if(rest>=2){
                rest-=2;
                next++;
            }
            else break;
        }
    }
    cout<<(next-1)<<endl;
    return 0;
}
