#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W,R,C;cin>>H>>W>>R>>C;
    R--;C--;
    int cnt=0;
    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            if(abs(R-i)+abs(C-j)==1)cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

