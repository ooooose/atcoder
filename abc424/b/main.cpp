#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M,K;cin>>N>>M>>K;
    vector<vector<int>> answers(N);
    vector<int> ans;

    for(int i=0;i<K;i++)
    {
        int a,b;cin>>a>>b;
        a--;
        answers[a].push_back(b);
        if(answers[a].size()==M) ans.push_back(a+1);
    }
    for(int a : ans) cout<<a<<" ";
    cout<<endl;
    return 0;
}

