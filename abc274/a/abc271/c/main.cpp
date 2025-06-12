#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    sort(A.begin(),A.end());
    if(A[0]!=1&&A.size()<2){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<N;i++){
        if(i+1!=A[i]){
            if(A.size()-i>=2){
                A.pop_back();
                A.pop_back();
            }
            else{
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    
    return 0;
}

