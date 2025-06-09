#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll=long long;
int N;
ll A[12];
ll S[12];
ll val;
unordered_set<ll> st;

void dfs(int idx,int sz){
    for(int i=0;i<=sz;i++){
        val^=S[i];
        S[i]+=A[idx];
        val^=S[i];
        if(idx==N-1)st.insert(val);
        else if(i<sz)dfs(idx+1,sz);
        else dfs(idx+1,sz+1);
        val^=S[i];
        S[i]-=A[idx];
        val^=S[i];
    }
    return;
}

int main() {
    cin>>N;
    for(int i=0;i<N;++i)cin>>A[i];
    for(int i=0;i<N;i++)S[i]=0;
    val=0;
    dfs(0,0);

    cout<<((int)(st.size()))<<endl;
    return 0;
}
