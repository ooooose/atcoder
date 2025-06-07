#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P =pair<int,int>;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);

    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];
    vector<P> events;
    rep(i,N)events.push_back(P(A[i],0));
    rep(i,M)events.push_back(P(B[i]+1,0));
    sort(events.begin(),events.end());
    int na=0,nb=M;
    for(auto [p,type] : events) {
        if(type==0)na++; else nb--;
        if(na>=nb){
            cout<<p<<endl;
            return 0;
        }
    }
    return 0;
}

