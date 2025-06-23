#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> X(N),Y(N);
    for(int i=0;i<N;i++)cin>>X[i]>>Y[i];
    string S;cin>>S;
    map<int,vector<pair<int,char>>> P;
    for(int i=0;i<N;i++)P[Y[i]].push_back(make_pair(X[i],S[i]));

    for(auto &[y,row]:P)
    {
        sort(row.begin(),row.end());

        bool sr=false;

        for(auto &[x,d]:row)
        {
            if(d=='R')sr=true;
            else if(d=='L'&&sr)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}

