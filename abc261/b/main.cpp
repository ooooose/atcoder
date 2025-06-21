#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    vector<string> S(N);
    for(int i=0;i<N;i++)cin>>S[i];
    for(int i=0;i<N;i++)for(int j=0;j<N;j++)
    {
        if(i==j)continue;
        if((S[i][j]=='W'&&S[j][i]=='W')||(S[i][j]=='L'&&S[j][i]=='L')||(S[i][j]=='D'&&S[j][i]!='D')||(S[i][j]!='D'&&S[j][i]=='D'))
        {
            cout<<"incorrect"<<endl;
            return 0;
        }
    }
    
    cout<<"correct"<<endl;
    return 0;
}

