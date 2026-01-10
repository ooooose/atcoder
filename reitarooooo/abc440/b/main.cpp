#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;

    vector<pair<int,int>> T(N);
    for(int i=0;i<N;i++)
    {
        cin>>T[i].first;
        T[i].second=i;
    }

    sort(T.begin(),T.end());

    for(int i=0;i<3;i++)cout<<T[i].second+1<<" ";
    cout<<endl;
    
    return 0;
}

