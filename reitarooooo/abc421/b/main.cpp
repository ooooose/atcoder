#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

long long rev(long long x)
{
    string t=to_string(x);
    reverse(t.begin(),t.end());
    return stoll(t);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> A(11);
    cin>>A[1]>>A[2];
    for(int i=3;i<=10;i++)A[i]=rev(A[i-1]+A[i-2]);

    cout<<A[10]<<endl;
    return 0;
}

