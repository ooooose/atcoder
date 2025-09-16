#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<ll,int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K; cin>>N>>K;
    ll now=0;
    int empty=K;

    // 店内の状態を保持（時間、人数）
    priority_queue<P,vector<P>,greater<P> > que;

    for(int i=0;i<N;i++)
    {
        int a,b,c; cin>>a>>b>>c;

        while(que.size() && que.top().first<a)
        {
            empty+=que.top().second;
            que.pop();
        }
        now=max<ll>(now,a);

        // 十分な空きが確保できる限り、queから取り出す
        while(empty<c)
        {
            now=que.top().first;
            empty+=que.top().second;
            que.pop();
        }

        empty-=c;
        que.emplace(now+b,c);

        cout<<now<<"\n";
    }

    return 0;
}

