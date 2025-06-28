#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;cin>>N>>Q;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    sort(A.begin(),A.end());

    while(Q--)
    {
        int x;cin>>x;
        int it=A.end()-lower_bound(A.begin(),A.end(),x);
        cout<<it<<endl;
    }
    return 0;
}

