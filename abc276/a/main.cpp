#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N,M;
string S;
int ans=0;

bool win(char me, char you) {
    return (me=='G'&&you=='C' ||
            me=='C'&&you=='P' ||
            me=='P'&&you=='G');
}

int fingers(char hand){
    if(hand=='G')return 0;
    if(hand=='C')return 2;
    return 5;
}

void dfs(int i, int sum, int wins){
    if(sum>M) return;
    if(i==N){
        if(sum==M)ans=max(ans,wins);
        return;
    }
    for(char hand:{'G','C','P'}){
        int f=fingers(hand);
        int win_count=win(hand,S[i])?1:0;
        dfs(i+1,sum+f,wins+win_count);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>M>>S;

    dfs(0,0,0);

    cout<<ans<<endl;
    return 0;
}

