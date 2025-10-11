#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--)
    {
        int N;cin>>N;
        string S;cin>>S;


        int max_cnt=0;
        int cnt=0;
        int right;
        char target;
        for(int i=1;i<N;i++)
        {
            if(S[i]!=S[i-1])cnt=0;
            else cnt++;
            if(cnt>=max_cnt)
            {
                right=i+1;
                target=S[i];
            }; 
            max_cnt=max(max_cnt,cnt);
        }
        max_cnt++;
        int diff=0;
        for(auto s: S)if(target==s)diff++; 
        diff-=max_cnt;
        cout<<N-max_cnt+diff<<"\n";
    }
    
    return 0;
}

