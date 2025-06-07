#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N;
    cin>>N;
    string T,A;
    cin>>T;
    cin>>A;
    rep(i,N){
        if(T[i]=='o'&&A[i]=='o'){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    
    return 0;
}

