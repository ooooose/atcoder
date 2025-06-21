#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> A;
    A.push_back(1);
    if(N==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(int i=2;i<=16;i++)
    {
        vector<int> C=A;
        A.push_back(i);
        A.insert(A.end(),C.begin(),C.end());
        if(i==N)break;
    }
    for(int a:A)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}

