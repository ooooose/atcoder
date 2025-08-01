#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    string ans="";
    int cnt=0;
    while(N--)
    {
        char c;int l;
        cin>>c>>l;
        cnt+=l;
        if(cnt>100)
        {
            cout<<"Too Long"<<endl;
            return 0;
        }
        for(int i=0;i<l;i++)ans+=c;
    }
    cout<<ans<<endl;
    return 0;
}

