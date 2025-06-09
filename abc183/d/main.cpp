#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,W;
    cin>>N>>W;
    
    vector<long long> imos(200009,0);

    for(int i=0;i<N;i++){
        int S,T;
        long long P;
        cin>>S>>T>>P;
        imos[S]+=P;
        imos[T]-=P;
    }
    long long current=0;
    for(auto i: imos){
        current+=i;
        
        if(current>W){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}

