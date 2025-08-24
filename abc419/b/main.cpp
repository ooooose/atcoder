#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Q;cin>>Q;

    priority_queue<int, vector<int>, greater<>> balls;
    while(Q--)
    {
        int q;cin>>q;
        if(q==1)
        {
            int x;cin>>x;
            balls.push(x);
        }
        else if(q==2)
        {
            int x=balls.top();balls.pop();
            cout<<x<<endl;
        }
    }
    
    return 0;
}

