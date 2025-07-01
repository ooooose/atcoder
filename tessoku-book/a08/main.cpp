#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H,W;cin>>H>>W;
    vector<vector<int>> X(H+1,vector<int>(W+1,0));
    vector<vector<int>> S(H+1,vector<int>(W+1,0));

    for(int i=1;i<=H;++i)for(int j=1;j<=W;++j)cin >> X[i][j];

    for(int i=1;i<=H;++i)
    {
        for(int j=1;j<=W;++j)S[i][j]=S[i-1][j]+S[i][j-1]-S[i-1][j-1]+X[i][j];
    }

    int Q;cin>>Q;
    while(Q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<S[c][d]-S[a-1][d]-S[c][b-1]+S[a-1][b-1]<<"\n";
    }

    return 0;
}

