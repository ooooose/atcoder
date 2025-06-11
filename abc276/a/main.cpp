#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    string S;
    cin>>N>>M>>S;

    vector<vector<int>> dp(N+1, vector<int>(M+1,-1));
    dp[0][0]=0;

    auto fingers=[](char hand)->int{
        if(hand=='G')return 0;
        if(hand=='C')return 2;
        return 5;
    };
    auto win=[](char me, char you)->bool{
        return(me=='G'&&you=='C')||
                (me=='C'&&you=='P')||
                (me=='P'&&you=='G');
    };
    
    vector<char> hands={'G','C','P'};

    for(int i=0;i<N;i++){
        for(int sum=0;sum<=M;++sum){
            if(dp[i][sum]==-1)continue;
            for(char h:hands){
                int f=fingers(h);
                if(sum+f>M)continue;

                int w=win(h,S[i])?1:0;
                dp[i+1][sum+f]=max(dp[i+1][sum+f],dp[i][sum]+w);
            }
        }
    }
    cout<<dp[N][M]<<endl;
    return 0;
}

