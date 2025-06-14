#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<int> A(M);
    for(int i=0;i<M;i++)A[i]=i+1;
    vector<vector<int>> ans;
    for(int bit=0;bit<(1<<M);bit++){
        vector<int> tmp;
        for(int i=0;i<M;i++){
            if(bit&(1<<i))tmp.push_back(A[i]);
        }
        if(tmp.size()!=N)continue;
        ans.push_back(tmp);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<N;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

