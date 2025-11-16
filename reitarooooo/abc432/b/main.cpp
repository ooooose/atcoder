#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string A;cin>>A;
    sort(A.begin(),A.end());

    for(int i=0;i<(int)A.size();i++)
    {
        if(A[i]>'0')
        {
            swap(A[0],A[i]);
            break;
        }
    }

    cout<<A<<endl;
    return 0;
}

