#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    int idx=0;
    int max_h=0;
    for(int i=0;i<N;i++)
    {
        int h;cin>>h;
        if(max_h<h)
        {
            max_h=h;
            idx=i+1;
        }
    }
    cout<<idx<<endl;
    return 0;
}

