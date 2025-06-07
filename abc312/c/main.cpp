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
    vector<int> events;
    rep(i,N)events.push_back(A[i]);
    rep(i,M)events.push_back(B[i]+1);
    sort(events.begin(),events.end());
    cout<<events[M-1]<<endl;
    return 0;
}

