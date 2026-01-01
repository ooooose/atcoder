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
        int sum=10000*i;
        for(int j=N-i;j>=0;j--)
        {
            sum+=5000*j+1000*(N-i-j);
            if(sum==A)
            {
                cout<<i<<" "<<j<<" "<<N-i-j<<endl;
                return 0;
            }
            sum-=5000*j+1000*(N-i-j);
        }
    }

    cout<<-1<<" "<<-1<<" "<<-1<<endl;
    return 0;
}

