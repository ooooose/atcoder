#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> D(N);
    for(int i=0;i<N-1;i++)cin>>D[i];
    for(int i=0;i<N-1;i++)
    {
        int sum=0;
        for(int j=i;j<N-1;j++)
        {
            sum+=D[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

