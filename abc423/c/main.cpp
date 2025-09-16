#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,R;cin>>N>>R;
    vector<int> L(N);
    for(int i=0;i<N;i++)cin>>L[i];
    int left=0,right=N;
    for(int i=0;i<N;i++)if(L[i]==0)
    {
        left=i;
        break;
    }
    for(int i=N-1;i>0;i--)if(L[i]==0)
    {
        right=i;
        break;
    }
    int cnt=0;
    for(int i=left;i<=right;i++)
    {
        if(L[i]==0)cnt++;
        else if(L[i]==1)cnt+=2;
    }

    cout<<cnt<<endl;
    return 0;
}

