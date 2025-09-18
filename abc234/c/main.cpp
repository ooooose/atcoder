#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

string convert(long long x)
{
    string res;
    while(x>0)
    {
        res.push_back('0'+(x%2));
        x/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}

void output(string s)
{
    for(auto &nx: s)
    {
        if(nx=='1'){cout<<'2';}
        else{cout<<'0';}
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;cin>>N;
    output(convert(N));
    return 0;
}

