#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1<l2)
    {
        if(r1<l2) cout<<0<<endl;
        else if(r1<r2) cout<<r1-l2<<endl;
        else cout<<r2-l2<<endl;
    }
    else 
    {
        if(r2<l1) cout<<0<<endl;
        else if(r1<r2) cout<<r1-l1<<endl;
        else cout<<r2-l1<<endl;
    }
    
    return 0;
}

