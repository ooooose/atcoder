#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    string S;cin>>S;
    int current=0;
    rep(i,N){
        if(S[i]=='"'){
            if(current)current--;
            else current++;
        }
        else{
            if(S[i]==','&&!current)S[i]='.';
        }
    }

    cout<<S<<endl;
    
    return 0;
}

