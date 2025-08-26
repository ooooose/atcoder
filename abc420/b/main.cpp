#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<string> s_list(N);
    vector<int> scores(N,0);
    for(int i=0;i<N;i++)cin>>s_list[i];
    for(int i=0;i<M;i++)
    {
        int x=0,y=0;
        for(int j=0;j<N;j++)
        {
            if(s_list[j][i]=='0')x++;
            else y++;
        }
        if(x==0&&y==0)
        {
            for(int j=0;j<N;j++)scores[j]++;
        }
        else if(x>y)
        {
            for(int j=0;j<N;j++)if(s_list[j][i]=='1')scores[j]++;
        }
        else if(x<y)
        {
            for(int j=0;j<N;j++)if(s_list[j][i]=='0')scores[j]++;
        }
    }
    int max_score=*max_element(scores.begin(),scores.end());

    for(int i=0;i<N;i++)
    {
        if(max_score==scores[i])cout<<i+1<<" ";
    }
    cout<<endl;
    return 0;
}

