#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,A,B;cin>>N>>A>>B;
    string S;cin>>S;

    int ans=0;
    for(int l=0;l<N;l++)
    {
        int r=l;
        int a=0,b=0;
        while(b<B&&r<N)
        {
            if(S[r]=='a')a++;
            else b++;
            if(b>=B)break;
            if(a>=A)ans++;
            r++;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}

