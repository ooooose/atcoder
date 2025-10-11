#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> ans(N+1);

    ans[0]=1;
    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<i;j++) 
        {
            string s = to_string(ans[j]);
            int sum=0;
            for(int k=0;k<(int)s.size();k++)sum+=s[k]-'0';
            ans[i]+=sum;
        }
    }
    cout<<ans[N]<<endl;
    return 0;
}

