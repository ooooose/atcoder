#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<string> S(N);
    for(int i=0;i<N;i++)cin>>S[i];
    int target_i;cin>>target_i;
    target_i--;
    string target;cin>>target;
    if(S[target_i]==target)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    
    return 0;
}

