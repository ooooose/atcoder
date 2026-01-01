#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,A;cin>>N>>A;
    for(int i=N;i>=0;i--)
    {
        for(int j=N-i;j>=0;j--)
        {
            int k=N-i-j;
            if(10000*i+5000*j+1000*k==A)
            {
                cout<<i<<" "<<j<<" "<<k<<endl;
                return 0;
            }
        }
    }

    cout<<-1<<" "<<-1<<" "<<-1<<endl;
    return 0;
}

