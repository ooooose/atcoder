#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X,C;cin>>X>>C;
    int ans=0;
    int base=0;
    while(base<X)
    {
        base+=1000;
        base+=C;
        if(base>X)
        {
            break;
        }
        ans+=1000;
    }
    cout<<ans<<endl;
    return 0;
}

