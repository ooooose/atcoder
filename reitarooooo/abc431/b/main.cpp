#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X;cin>>X;
    int N;cin>>N;

    vector<int> W(N);
    for(int i=0;i<N;i++)cin>>W[i];
    int Q;cin>>Q;
    set<int> log;
    while(Q--)
    {
        int p;cin>>p;
        p--;
        if(!log.count(p))
        {
            X+=W[p];
            log.insert(p);
        }
        else
        {
            X-=W[p];
            log.erase(p);
        }
        cout<<X<<endl;
    }
    
    return 0;
}

